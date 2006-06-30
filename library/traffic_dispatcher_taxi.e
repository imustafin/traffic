indexing
	description: "Taxi used for taxi dispatcher application using method call communication"
	date: "$Date: 6/6/2006$"
	revision: "$Revision$"

class
	TRAFFIC_DISPATCHER_TAXI inherit 
		TRAFFIC_TAXI
create
	make_random
	
feature -- Initialization
	make_random (a_taxi_office: TRAFFIC_DISPATCHER_TAXI_OFFICE; a_seed: INTEGER; stops: INTEGER;) is		
			-- Create a taxi with an associated 'a_taxi_office'.
			-- Random speed and stops at 'stops' random positions.
			-- Set seed of random_number to 'a_seed'.
			require
				a_taxi_office_not_void: a_taxi_office /= void
				valid_seed: a_seed >= 0
				valid_number_of_stops: stops >= 2
			do
				traffic_type := create {TRAFFIC_TYPE_DISPATCHER_TAXI}.make
				create polypoints.make (stops)
				create random_number.set_seed(a_seed)
				add_random_polypoints (stops)
				
				office := a_taxi_office
				office.enlist(Current)
				
				set_reiterate (true)
				set_coordinates
				set_angle
				virtual_speed := random_number.double_item	
			end

feature -- Access
	office : TRAFFIC_DISPATCHER_TAXI_OFFICE
		-- Taxi office 'Current' works for.
		
feature -- Basic operations
			
		take(from_location: EM_VECTOR_2D; to_location: EM_VECTOR_2D) is
			-- Take a request. Pick somebody up at from_location and bring him or her to to_location.
			-- If busy inform the taxi office to recall it.
			do
				if not busy then
					-- Set taxi busy and take it out of the available_taxi_list of the office.
					set_request_information(from_location, to_location)
					busy := True
					-- Set is_marked to true so that the view will draw the busy taxi marked.
					is_marked := True
					office.delist(Current)
				else
					office.recall(from_location, to_location)
				end
			end
			
		take_tour is
			-- Take a tour on the map.
			-- Set new random directions and if 'Current' has done a request and is available again .
				do
					move
					if has_finished and busy then
							-- Taxi has fullfilled a request.
							-- Add new random directions.
							polypoints.wipe_out
							add_random_polypoints (7)
							-- Set new destination
							origin := position
							destination := map_to_gl_coords (polypoints.first)
							has_finished := false
							set_reiterate (true)
							-- Taxi is available again.
							busy := false
							is_marked := false
							office.enlist(Current)
					end
				end

invariant
	random_number_not_void: random_number /= void
end

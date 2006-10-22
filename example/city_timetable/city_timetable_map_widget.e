indexing
	description: "3 dimensional map of a city with many event handlers"
	date: "$Date: 2005/12/22 10:48:08 $"
	revision: "$Revision: 1.90 $"

class CITY_TIMETABLE_MAP_WIDGET

inherit

	TRAFFIC_3D_MAP_WIDGET
		redefine
			make,
			prepare_drawing
		end

create
	make

feature -- Initialization

	make is
			-- Subscribe to events.
		do
			Precursor
			-- User Interaction
			mouse_dragged_event.subscribe (agent mouse_drag (?))
			mouse_wheel_down_event.subscribe (agent wheel_down)
			mouse_wheel_up_event.subscribe (agent wheel_up)
			key_down_event.subscribe (agent key_down (?))
			mouse_clicked_event.subscribe (agent mouse_click)
		end

feature -- Access

	marked_station: TRAFFIC_PLACE
			-- Currently marked origin

	shortest_path_line: TRAFFIC_LINE
			-- Artificial traffic line for the shortest path

feature -- Basic operations

	zoom_in is
			-- Zoom in.
		do
			wheel_up
		end

	zoom_out is
			-- Zoom in.
		do
			wheel_down
		end

	add_vehicles is
			-- Add trams to lines
		require
			factory_exists: travelers_representation /= Void
		do
			travelers_representation.add_tram_per_line_with_schedule (map, 1)
		end

feature -- Drawing

	prepare_drawing is
			-- Prepare the drawing.
		do
			Precursor

			-- Translation
			gl_translatef_external (x_coord*focus, y_coord, z_coord*focus)
			gl_translatef_external (x_translation, -y_translation, 0)

			-- Rotation
			gl_rotatef_external (x_rotation, 1, 0, 0)
			gl_rotatef_external (y_rotation, 0, 1, 0)
		end


feature {NONE} -- Event handling

	wheel_down is
			-- Handle mouse wheel down event.
		do
			if focus > 3 then
				focus := focus + 1
			else
				focus := focus + 0.1
			end
		ensure then
			focus_incremented: focus > old focus
		end

	wheel_up is
			-- Handle mouse wheel up event.
		do
			if focus > 3 then
				focus := focus - 1
			elseif focus > 0.1 then
				focus := focus - 0.1
			end
		ensure then
			focus_decremented: focus > 0.1 implies focus < old focus
		end

	mouse_click (event: EM_MOUSEBUTTON_EVENT) is
			-- Handle mouse clicked event.
		local
			result_vec: GL_VECTOR_3D[DOUBLE]
			clicked_point: EM_VECTOR_2D
			place: TRAFFIC_PLACE
		do
			result_vec := transform_coords(event.screen_x, event.screen_y)
			clicked_point := gl_to_map_coords (create {EM_VECTOR_2D}.make (result_vec.x, result_vec.z))
			if event.is_left_button then
				if map /= Void then
					if marked_station /= Void then
						places_representation.unhighlight_place (marked_station)
					end
					place := places_representation.place_at_position (clicked_point)
					if place /= Void then
						marked_station := place
						places_representation.highlight_place(marked_station, place_highlight_color1)
						marked_station_changed := True
					end
				end
			end
		end

	mouse_drag (event: EM_MOUSEMOTION_EVENT) is
			-- Handle mouse movement event.
		local
			start_vec, end_vec: GL_VECTOR_3D[DOUBLE]
			delta_x, delta_y, delta, mouse_delta: DOUBLE
		do
			if event.button_state_right then
				y_rotation := y_rotation + event.x_motion
				x_rotation := x_rotation + event.y_motion
				if x_rotation <= 15 then
					x_rotation := 15
				elseif x_rotation >= 90 then
					x_rotation := 90
				end

			elseif event.button_state_left then
				start_vec := transform_coords (event.x, event.y)
				end_vec := transform_coords (event.x + event.x_motion, event.y + event.y_motion)

				delta_x := end_vec.x - start_vec.x
				delta_y := end_vec.z - start_vec.z

				delta := sqrt (delta_x^2 + delta_y^2)
				mouse_delta := sqrt (event.x_motion^2 + event.y_motion^2)

				if mouse_delta > 0 and then delta/mouse_delta <= 3 and then sqrt (start_vec.x^2 + start_vec.y^2) < plane_size/2 then
					x_translation := x_translation + event.x_motion*(delta/mouse_delta)
					y_translation := y_translation + event.y_motion*(delta/mouse_delta)
				end
			end
		end

	key_down (event: EM_KEYBOARD_EVENT) is
			-- Handle key events.
		do
			if event.key = event.sdlk_up then
				x_rotation := x_rotation + 10
			elseif event.key = event.sdlk_down then
				x_rotation := x_rotation - 10
			elseif event.key = event.sdlk_left then
				y_rotation := y_rotation - 10
			elseif event.key = event.sdlk_right then
				y_rotation := y_rotation + 10
			elseif event.key = event.sdlk_return then
				x_coord := 0
				y_coord := -1
				z_coord := -9
				x_translation := 0
				y_translation := 0
			end
		end

feature {NONE} -- Implementation

	last_polypoint: EM_VECTOR_2D
			-- The last polypoint visited

	position: EM_VECTOR_2D
			-- The current position

	Speed: DOUBLE is 0.05
			-- Speed of the traffic line rides

	place_highlight_color1: EM_COLOR is
			-- Highlight color for marked origins
		once
			create Result.make_with_rgb (0, 255, 0)
		ensure
			Result_exists: Result /= Void
		end

	place_highlight_color2: EM_COLOR is
			-- Highlight color for marked origins
		once
			create Result.make_with_rgb (0, 0, 255)
		ensure
			Result_exists: Result /= Void
		end

invariant

	focus_greater_than_0: focus > 0

end

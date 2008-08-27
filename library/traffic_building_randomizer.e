indexing
	description: "Objects that distribute buildings randomly over the city"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_BUILDING_RANDOMIZER

inherit

	DOUBLE_MATH

create
	set_city

feature -- Element change

	set_city (a_city: TRAFFIC_CITY) is
			-- Initialize with `a_city'.
		require
			a_city_exists: a_city /= Void
		local
			t: TIME
		do
			create t.make_now
			create random.set_seed (t.compact_time)
			random.start
			city := a_city
			create templates.make (1, 3)
			templates.force (create {TRAFFIC_VILLA}.make_default (create {TRAFFIC_POINT}.make (0, 0)), 1)
			templates.force (create {TRAFFIC_APARTMENT_BUILDING}.make_default (create {TRAFFIC_POINT}.make (0, 0)), 2)
			templates.force (create {TRAFFIC_SKYSCRAPER}.make_default (create {TRAFFIC_POINT}.make (0, 0)), 3)
			create grid.make ((city.radius/templates.item (1).width).ceiling*8, city.center, city.radius)
			mark_occupied
		ensure
			city_set: city = a_city
			grid_exists: grid /= Void
		end

feature -- Basic operations

	generate_random_buildings (a_number: INTEGER; a_radius: DOUBLE; a_template: INTEGER) is
			-- Generate at most `a_number' buildings of same type as `a_template' in `a_radius' around the city center.
		require
			a_number_valid: a_number > 0
			a_radius_valid: a_radius > 0
			a_template_valid: a_template > 0 and a_template <= template_count
		local
			nr_buildings_placed, j: INTEGER
			w, b: DOUBLE
			point_randomizer: TRAFFIC_POINT_RANDOMIZER
			center: TRAFFIC_POINT
			building: TRAFFIC_BUILDING
		do
			create last_buildings.make (a_number)
			-- set maximum number of iterations to ensure termination
			nr_buildings_placed := 0
			w := templates.item (a_template).width -- buildings_representation.width_of_template (a_template)
			b := templates.item (a_template).depth --buildings_representation.breadth_of_template (a_template)
			create point_randomizer.make (city.center, a_radius)

			-- iterate to get different random values of locations on city
			from
				j := 1
			until
				nr_buildings_placed > a_number  or  j > max_iterations
			loop
				point_randomizer.generate_point_array (1)
				center := point_randomizer.last_array.item (1)

				-- Check for collision with lines and other buildings
				if	not grid.has_rectangle_collision (center, w, b) then
					building := templates.item (a_template).twin
					building.set_center (center)
					last_buildings.force_last (building)
					grid.mark_rectangle (center, w, b, True)
					nr_buildings_placed := nr_buildings_placed + 1
				end
				-- we need two random j's per round
				j := j + 2
			end
		end

feature -- Access

	template_count: INTEGER is
			-- Number of templates
		do
			Result := templates.count
		end

	city: TRAFFIC_CITY
			-- City used for placing buildings

	grid: TRAFFIC_GRID
			-- Grid used for marking occupied spaces

	last_buildings: DS_ARRAYED_LIST [TRAFFIC_BUILDING]
			-- Buildings generated by the last call to `generate_random_buildings'


feature {NONE} -- Implementation

	Max_iterations: INTEGER is 1000
			-- Maximal number of iterations to ensure termination of the algorithm

	Line_width: INTEGER is 10
			-- Line width used for marking line segments as occupied

	random: RANDOM
			-- Random number generator

	templates: ARRAY [TRAFFIC_BUILDING]
			-- Building templates

	mark_occupied is
			-- Mark all cells of the grid that are already occupied by a city item.
		local
			poly_points: DS_ARRAYED_LIST [TRAFFIC_POINT]
			poly_point: TRAFFIC_POINT
			i,j:INTEGER
			s: TRAFFIC_ITEM_HASH_TABLE[TRAFFIC_STATION,STRING_8]
		do
			-- Mark cells for each of the line segments
			from
				i:=1
			until
				i > city.line_segments.count
			loop
				-- traverse each poly point of a line segment
				poly_points := city.line_segments.item (i).polypoints
				from
					j:=2
					poly_point := poly_points.item (1)
				until
					j > poly_points.count
				loop
					grid.mark_line (poly_point, poly_points.item (j), line_width, True)
					poly_point := poly_points.item (j)
					j:=j+1
				end
				i :=i+1
			end
			-- Mark cells for each of the stations
			s:=city.stations
			from
				s.start
			until
				s.after
			loop
				if s.item_for_iteration.width > 0 and s.item_for_iteration.breadth > 0 then
					grid.mark_rectangle (s.item_for_iteration.location, s.item_for_iteration.width, s.item_for_iteration.breadth, True)
				end
				s.forth
			end
		end

invariant

	city_exists: city /= Void
	random_exists: random /= Void

end

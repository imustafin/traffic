indexing
	description: "Factory for traffic elements like TRAFFIC_PLACE, TRAFFIC_LINE etc."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_MAP_FACTORY

inherit
	TRAFFIC_TYPE_FACTORY
		rename
			make as make_type_factory,
			build as build_traffic_type
		end

create
	make

feature {NONE} -- Initialization

	make is
			-- Initialize `Current'.
		do
			make_type_factory
			reset_factory
		ensure then
			everything_void: internal_map = Void and
							 internal_place = Void and
							 internal_line_section = Void and
							 internal_line = Void
							 internal_road=Void
		end

feature -- Initialization

	reset_factory is
			-- Reset traffic map factory.
		do
			internal_map := Void
			internal_place := Void
			internal_line_section := Void
			internal_line := Void
		ensure
			everything_void: internal_map = Void and
							 internal_place = Void and
							 internal_line_section = Void and
							 internal_line = Void
							 internal_road= Void
		end

feature -- Traffic map building

	build_map (a_name: STRING) is
			-- Generate new map object with name `a_name'.
			-- (Access generated object through feature `map')
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
		do
			create internal_map.make (a_name)
		ensure
			map_created: map /= Void
			map_has_name: equal (map.name, a_name)
		end

	map: TRAFFIC_MAP is
			-- Generated traffic map object.
		require
			map_available: has_map
		do
			Result := internal_map
		ensure
			Result_exists: Result /= Void
		end

	has_map: BOOLEAN is
			-- Is traffic map object available?
		do
			Result := internal_map /= Void
		end

feature -- Traffic place building

	build_place (a_name: STRING; a_map: TRAFFIC_MAP) is
			-- Generate new traffic place object with name `a_name' belonging to traffic map `a_map'.
			-- (Access generated object through feature `place')
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
			map_exists: has_map
			unique_name: not a_map.places.has (a_name)
		do
			create internal_place.make (a_name)
			internal_place.add_to_map (a_map)
		ensure
			place_created: place /= Void
			place_has_name: equal (place.name, a_name)
			place_in_map: a_map.places.has (a_name)
		end

	build_place_with_position (a_name: STRING; a_x, a_y: INTEGER; a_map: TRAFFIC_MAP) is
			-- Generate new traffic place object with name `a_name' and
			-- position (`a_x', `a_y') belonging to traffic map `a_map'.
			-- (Access generated object through feature `place')
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
			map_exists: has_map
			unique_name: not a_map.places.has (a_name)
		do
			create internal_place.make_with_position (a_name, a_x, a_y)
			internal_place.add_to_map (a_map)
		ensure
			place_created: place /= Void
			place_has_name: equal (place.name, a_name)
			place_in_map: a_map.places.has (a_name)
		end

	place: TRAFFIC_PLACE is
			-- Generated traffic place object.
		require
			place_available: has_place
		do
			Result := internal_place
		ensure
			Result_exists: Result /= Void
		end

	has_place: BOOLEAN is
			-- Is traffic place object available?
		do
			Result := internal_place /= Void
		end

feature -- Line section building

	build_line_section (a_origin, a_destination:STRING; a_polypoints: DS_ARRAYED_LIST [EM_VECTOR_2D]; a_map: TRAFFIC_MAP; a_line: TRAFFIC_LINE) is
			-- Generate new traffic line section object going from origin `a_origin' to place named `a_destination'
			-- belonging to line `a_line' in map `a_map'.
			-- (Access the generated object through feature `line_section')
		require
			a_map_exists: a_map /= Void
			a_origin_exists: a_map.places.has (a_origin)
			a_destination_exists: a_map.places.has (a_destination)
			a_line_exists: a_line /= Void
		local
			pps: DS_ARRAYED_LIST [EM_VECTOR_2D]
			origin_place: TRAFFIC_PLACE
			destination_place: TRAFFIC_PLACE
			origin_stop: TRAFFIC_STOP
			destination_stop: TRAFFIC_STOP
			stop_pos: EM_VECTOR_2D
		do
			if a_polypoints = Void or else a_polypoints.count < 2 then
				create pps.make (2)
				pps.force_last (a_map.places.item (a_origin).position)
				pps.force_last (a_map.places.item (a_destination).position)
			else
				pps := a_polypoints
			end
			origin_place := a_map.places.item (a_origin)
			destination_place := a_map.places.item (a_destination)

			if origin_place.has_stop (a_line) then
				origin_stop := origin_place.stop (a_line)
			else
				create stop_pos.make_from_other (pps.first)
				create origin_stop.make_stop (origin_place, a_line, stop_pos) --, a_polypoints.first.x, a_polypoints.first.y)
			end

			if destination_place.has_stop (a_line) then
				destination_stop := destination_place.stop (a_line)
			else
				create stop_pos.make_from_other (pps.last)
				create destination_stop.make_stop (destination_place, a_line, stop_pos) --, a_polypoints.first.x, a_polypoints.first.y)
			end

			create internal_line_section.make_insertable (origin_stop, destination_stop, a_line.type, pps)
			a_line.extend (internal_line_section)
		ensure
			line_section_created: line_section /= Void
			line_section_has_line: line_section.line = a_line
			line_section_has_type: equal (line_section.type, a_line.type)
			line_section_has_origin: line_section.origin = a_map.places.item (a_origin)
			line_section_has_destination: line_section.destination = a_map.places.item (a_destination)
		end

	line_section: TRAFFIC_LINE_CONNECTION is
			-- Generated traffic line section object.
		require
			line_section_available: has_line_section
		do
			Result := internal_line_section
		ensure
			Result_exists: Result /= Void
		end

	has_line_section: BOOLEAN is
			-- Is there a line section object available?
		do
			Result := internal_line_section /= Void
		end

feature -- Road section building

	build_road (a_origin, a_destination:STRING; a_map: TRAFFIC_MAP; a_type: STRING; an_id:STRING; a_direction:STRING) is
			-- Generate new traffic road object going from origin `a_origin' to place named `a_destination'
			-- belonging to `a_map'.
			-- (Access the generated object through feature `road')
		require
			a_map_exists: a_map /= Void
			a_origin_exists: a_map.places.has (a_origin)
			a_destination_exists: a_map.places.has (a_destination)
			an_id_exists: an_id/=Void
			a_type_exists: a_type/=Void
			a_direction_exists: a_direction/=Void
		local
			way1, way2: TRAFFIC_ROAD_CONNECTION
		do
			way1 := create_road_connection (a_origin, a_destination, a_map, a_type, an_id)
			if a_direction.is_equal ("undirected") then
				way2 := create_road_connection (a_destination, a_origin, a_map, a_type, an_id)
				create internal_road.make (way1, way2)
			else
				create internal_road.make_one_way (way1)
			end
			internal_road.add_to_map (a_map)
		ensure
			road_created: road /= Void
		end

	road: TRAFFIC_ROAD is
			-- Generated traffic road object.
		require
			road_available: has_road
		do
			Result := internal_road
		ensure
			Result_exists: Result /= Void
		end

	has_road: BOOLEAN is
			-- Is there a line section object available?
		do
			Result := internal_road /= Void
		end

feature -- Traffic line building

	build_line (a_name: STRING; a_type_name: STRING; a_map: TRAFFIC_MAP) is
			-- Generate new traffic line object with name `name' and type `type'
			-- belonging to map `a_map'.
			-- (Access the generated object through feature `line')
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
			a_map_exists: a_map /= Void
			type_name_is_valid: valid_name (a_type_name)
		local
			actual_traffic_type: TRAFFIC_TYPE_LINE
		do
			build_traffic_type (a_type_name)
			actual_traffic_type ?= internal_traffic_type
			create internal_line.make (a_name, actual_traffic_type)
			internal_line.add_to_map (a_map)
		ensure
			line_created: line /= Void
			line_has_name: equal (line.name, a_name)
			line_has_type: equal (line.type.name, a_type_name)
			line_in_map: a_map.lines.has (a_name)
		end

	line: TRAFFIC_LINE is
			-- Generated traffic line object.
		require
			line_available: has_line
		do
			Result := internal_line
		ensure
			Result_exists: Result /= Void
		end

	has_line: BOOLEAN is
			-- Is there a traffic line object available?
		do
			Result := internal_line /= Void
		end

feature -- Traffic simple line building

	build_simple_line (a_name: STRING; a_type_name: STRING; a_map: TRAFFIC_MAP) is
			-- Generate new traffic simple line object with name `name' and type `type'
			-- belonging to map `a_map'.
			-- (Access the generated object through feature `simple_line')
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
			a_map_exists: a_map /= Void
			type_name_is_valid: valid_name (a_type_name)
		local
			actual_traffic_type: TRAFFIC_TYPE_LINE
		do
			build_traffic_type (a_type_name)
			actual_traffic_type ?= internal_traffic_type
			create internal_simple_line.make (a_name, actual_traffic_type, a_map)
			internal_simple_line.add_to_map (a_map)
		ensure
			simple_line_created: simple_line /= Void
			simple_line_has_name: equal (simple_line.name, a_name)
			simple_line_has_type: equal (simple_line.type.name, a_type_name)
			simple_line_in_map: a_map.lines.has (a_name)
		end

	simple_line: TRAFFIC_SIMPLE_LINE is
			-- Generated traffic simple line object.
		require
			simple_line_available: has_simple_line
		do
			Result := internal_simple_line
		ensure
			Result_exists: Result /= Void
		end

	has_simple_line: BOOLEAN is
			-- Is there a traffic simple line object available?
		do
			Result := internal_simple_line /= Void
		end

feature {NONE} -- Implementation

	traffic_type_factory: TRAFFIC_TYPE_FACTORY
			-- Traffic type factory.

	internal_place: TRAFFIC_PLACE
			-- Internal representation of last created traffic place.

	internal_line_section: TRAFFIC_LINE_CONNECTION
			-- Internal representation of last created traffic line section.

	internal_line: TRAFFIC_LINE
			-- Internal representation of last created traffic line.

	internal_road: TRAFFIC_ROAD
			-- Internal representation of last created traffic road.

	internal_simple_line: TRAFFIC_SIMPLE_LINE
			-- Internal representation of last created traffic simple line.

	internal_map: TRAFFIC_MAP
			-- Internal representation of last created traffic map.

	create_road_connection (a_origin, a_destination: STRING; a_map: TRAFFIC_MAP; a_type:STRING;an_id:STRING): TRAFFIC_ROAD_CONNECTION is
			-- Create road with type `a_type', origin `a_origin', destination `a_destination' belonging to line `a_map'.
		require
			a_origin_exists: a_origin /= Void
			a_origin_not_empty: not a_origin.is_empty
			a_origin_in_map: a_map.places.has (a_origin)
			a_destination_exists: a_destination /= Void
			a_destination_not_empty: not a_destination.is_empty
			a_destination_in_map: a_map.places.has (a_destination)
			a_type_exists: a_type/=Void
			an_id_exists: an_id/=Void
		local
			a_road: TRAFFIC_ROAD_CONNECTION
			origin_place: TRAFFIC_PLACE
			destination_place: TRAFFIC_PLACE
			type: TRAFFIC_TYPE_ROAD
			i: INTEGER
			origin_node: TRAFFIC_NODE
			destination_node: TRAFFIC_NODE
		do
			origin_place := a_map.places.item (a_origin)
			destination_place := a_map.places.item (a_destination)

			origin_node := origin_place.dummy_node
			destination_node := destination_place.dummy_node

			create traffic_type_factory.make
			traffic_type_factory.build(a_type)
			type?= traffic_type_factory.traffic_type
			i:=an_id.to_integer
			create a_road.make_visible (origin_node, destination_node, type, i)
			Result := a_road
		ensure
			result_exists: Result /= Void
		end

end

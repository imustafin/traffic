indexing
	description: "Trolleybusses (not yet included in the city)"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TROLLEYBUS

inherit

	TRAFFIC_TRAM
		undefine
			is_valid_line,
			is_insertable,
			is_removable
		select
			capacity,
			engine_capacity
		end

	TRAFFIC_BUS
		rename
			unit_capacity as bus_unit_capacity,
			Default_virtual_speed as bus_speed,
			capacity as bus_capacity
		undefine
			make_with_line
	 	end

end

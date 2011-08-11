note
	description: "Writes xml file from a city model."

class
	XML_WRITER

inherit {NONE}
	XML_CITY_BUILDER
		export {NONE} all end

create
	write

feature -- Basic operations

	write (a_city: CITY; a_file_name: STRING)
			-- Write city description of `a_city' into file `a_file_name'.
		do
			create file.make (a_file_name)
			file.open_write

			if file.is_open_write then
				file.put_string ("<?xml version=%"1.0%"?>%N")
				file.put_string ("<!DOCTYPE city SYSTEM %"city.dtd%">%N")
				indentation_level := 0
				write_city (a_city)
				file.close
			end
		end

feature {NONE} -- Implementation

	file: KL_TEXT_OUTPUT_FILE
			-- File that is being written into.

	write_city (a_city: CITY)
			-- Write city description into file `file'.
		local
			si: V_MAP_ITERATOR [STRING, STATION]
			ti: V_MAP_ITERATOR [STRING, TRANSPORT_KIND]
			li: V_MAP_ITERATOR [INTEGER, LINE]
		do
			put_open_element (City_tag, [City_name_attribute, a_city.name])

			from
				si := a_city.stations.new_iterator
			until
				si.after
			loop
				write_station (si.value)
				si.forth
			end

			from
				ti := a_city.transport_kinds.new_iterator
			until
				ti.after
			loop
				write_transport (ti.value)
				ti.forth
			end

			from
				li := a_city.lines.new_iterator
			until
				li.after
			loop
				write_line (li.value)
				li.forth
			end

			put_close_element (City_tag)
		end

	write_station (a_station: STATION)
			-- Write station description into file `file'.
		do
			put_single_element (Station_tag,
				[Station_name_attribute, a_station.name,
				 Station_x_attribute, a_station.position.x,
				 Station_y_attribute, a_station.position.y])
		end

	write_transport (a_transport: TRANSPORT_KIND)
			-- Write transport description into file `file'.
		do
			put_single_element (Transport_tag,
				[Transport_name_attribute, a_transport.name,
				 Transport_color_attribute, a_transport.default_color])
		end

	write_line (a_line: LINE)
			-- Write line description into file `file'.
		local
			i: V_SEQUENCE_ITERATOR [STATION]
		do
			put_open_element (Line_tag,
				[Line_name_attribute, a_line.name,
				 Line_kind_attribute, a_line.kind.name,
				 Line_color_attribute, a_line.color])

			from
				i := a_line.stations.at_first
			until
				i.after
			loop
				put_single_element (Stop_tag, [Stop_name_attribute, i.item.name])
				i.forth
			end

			put_close_element (Line_tag)
		end

feature {NONE} -- Helper functions

	indentation_level: INTEGER
			-- Current indentation level in output file.

	put_open_element (a_name: STRING; a_attributes: TUPLE)
			-- Put an opening xml tag with name `a_name' and
			-- attributes `a_attributes.
		require
			attribute_names_values_match: a_attributes.count \\ 2 = 0
		do
			file.put_string (indenation_string)
			file.put_string ("<" + a_name + attribute_string (a_attributes) + ">%N")
			indentation_level := indentation_level + 1
		end

	put_close_element (a_name: STRING)
			-- Put a closing xml tag with name `a_name'.
		do
			indentation_level := indentation_level - 1
			file.put_string (indenation_string)
			file.put_string ("</" + a_name + ">%N")
		end

	put_single_element (a_name: STRING; a_attributes: TUPLE)
			-- Put a single xml tag with name `a_name' and attributes `a_attributes'.
		require
			attribute_names_values_match: a_attributes.count \\ 2 = 0
		do
			file.put_string (indenation_string)
			file.put_string ("<" + a_name + attribute_string (a_attributes) + "/>%N")
		end

	indenation_string: STRING
			-- String corresponding to current indentation level.
		do
			create Result.make_filled ('%T', indentation_level)
		end

	attribute_string (a_attributes: TUPLE): STRING
			-- String corresponding to xml attributes in `a_attributes'.
		require
			attribute_names_values_match: a_attributes.count \\ 2 = 0
		local
			i: INTEGER
		do
			create Result.make_empty
			from
				i := 1
			until
				i > a_attributes.count
			loop
				Result.append (" " + a_attributes.item (i).out + "=")
				Result.append ("%"" + a_attributes.item (i + 1).out + "%"")
				i := i + 2
			end
		end

end

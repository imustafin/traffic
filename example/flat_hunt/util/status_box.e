indexing
	description: "Status box for displaying player information"
	date: "$Date$"
	revision: "$Revision$"

class
	STATUS_BOX

inherit
	EM_DRAWABLE_CONTAINER [EM_DRAWABLE]
		redefine
			draw
		end
		
	THEME
		undefine
			default_create, copy, is_equal
		end

create
	make_at_position, make_from_coordinates, make_from_position_and_size

feature -- Initialization
	
	make_at_position (an_x: INTEGER; a_y: INTEGER; a_title: STRING) is
			-- Create status box with default values at position (`an_x', `a_y').
		require
			a_title_exists: a_title /= Void
		do
			make
			set_default_values
			set_x_y (an_x, a_y)
			create box.make_from_coordinates (0, 0, 0, 0)
			initialize_with_title (a_title)
		ensure
			positioned: x = an_x and y = a_y
		end

	make_from_coordinates (x1: INTEGER; y1: INTEGER; x2: INTEGER; y2: INTEGER; a_title: STRING) is
			-- Create status box from coordinates (x1, y1) to (x2, y2)
		require
			a_title_exists: a_title /= Void
			position1_valid: x1 >= 0 and x1 <= Window_width and y1 >= 0 and y1 <= Window_height
			position2_valid: x2 >= 0 and x2 <= Window_width and y2 >= 0 and y2 <= Window_height			
		do
			make
			set_default_values
			set_x_y (x1, y1)
			
			create box.make_from_coordinates (0, 0, x2 - x1, y2 - y1)
			initialize_with_title (a_title)
		ensure
			positioned: x = x1 and y = y1
		end
		
	make_from_position_and_size (an_x: INTEGER; a_y: INTEGER; a_width: INTEGER; a_height: INTEGER; a_title: STRING) is
			-- Create status box from position (`an_x', `a_y') and size (`a_width', `a_height').
		require
			a_title_exists: a_title /= Void
			a_width_positive: a_width >= 0
			a_height_positive: a_height >= 0
			position_valid: an_x >= 0 and an_x <= Window_width and a_y >= 0 and a_y <= Window_height
		do
			make
			set_default_values
			set_x_y (an_x, a_y)
			
			create box.make_from_position_and_size (0, 0, a_width, a_height)
			initialize_with_title (a_title)
		ensure
			positioned: x = an_x and y = a_y
		end

feature {NONE} -- Initialization Implementation

	set_default_values is
			-- Set default values for all attributes.
		do
			opacity := 100			
			color := Status_color
			alignment := Left
			font := Small_default_font
			title_font := Big_default_font
			max_line_width := 0
			text_height := 0
			box_auto_resize := False
			visible := True
		ensure
			color_set: color = Status_color
			font_set: font = Small_default_font
			title_font_setexists: title_font = Big_default_font		
		end
		
	initialize_box is
			-- Initialize box with default values.
		require
			color_exists: color /= Void
		do
			box.set_rounded_corner_radius (10)
			box.set_line_width (1)			
			box.set_line_color (color)
			box.line_color.set_alpha (255)
			box.set_fill_color (color)
			box.fill_color.set_alpha (opacity)
			extend (box)
		ensure
			box_added: has (box)		
		end

	initialize_with_title (a_title: STRING) is
			-- Initialize box with `a_title'.
		require
			a_title_exists: a_title /= Void
		do
			-- Initialize background box.
			initialize_box
			
			-- Create title.
			create title.make (a_title, title_font)
			title.set_x_y (15, 0)
			extend (title)
			
			-- Create list for text.
			create lines.make
			extend (lines)
			
			set_box_position
		ensure
			title_exists: title /= Void
			lines_exists: lines /= Void
			lines_added: has (lines)
			title_added: has (title)
		end
		
feature -- Access

	replace_text (some_lines: ARRAYED_LIST [STRING]) is
			-- Replace `lines' by `some_lines'.
		require
			some_lines_exists: some_lines /= Void
		do
			clear
			add_lines (some_lines)
		end

	add_lines (some_lines: ARRAYED_LIST [STRING]) is
			-- Add lines `some_lines' to status box.
		require
			some_lines_exists: some_lines /= Void
		do
			from
				some_lines.start
			until
				some_lines.after				
			loop
				add_line (some_lines.item)
				some_lines.forth
			end
		end
		
	add_line (a_line: STRING) is
			-- Add a line.
		require
			lines_exists: lines /= Void
			a_line_exists: a_line /= Void
		do
			lines.extend (create {EM_STRING}.make (a_line, font))
			
			-- Update max_line_width.
			if lines.last.width > max_line_width then
				max_line_width := lines.last.width
			end
			
			text_height := text_height + lines.last.height // 2 + Padding
			set_line_position (lines.count)	
		ensure
			text_height_set: text_height = old text_height + lines.last.height // 2 + Padding
			max_line_width_set: max_line_width >= lines.last.width
		end	
	
	clear is
			-- Remove all lines.
		do
			lines.wipe_out
		end

feature -- Settings
		
	set_opacity (an_opacity: like opacity) is
			-- Set `opacity' to `an_opacity'.
		require
			an_opacity_exists: an_opacity /= Void
		do
			opacity := an_opacity
			update_color
		ensure
			opacity_set: opacity = an_opacity
		end
		
	set_color (a_color: like color) is
			-- Set `color' to `a_color'.
		require
			a_color_exists: a_color /= Void
		do
			color := a_color
			update_color
		ensure
			color_set: color = a_color
		end
		
	set_alignment (an_alignment: like alignment) is
			-- Set `alignment' of the lines to `an_alignment'.
		require
			an_alignment_valid: an_alignment >= 0 and an_alignment < 4
		do
			alignment := an_alignment
			update_lines
		ensure
			alignment_set: alignment = an_alignment
		end
		
	set_font (a_font: like font) is
			-- Set `font' to be used for the text to `a_font'.
		require
			a_font_exists: a_font /= Void
		do
			font := a_font
			update_lines
		ensure
			font_set: font = a_font
		end

	set_title_font (a_font: like title_font) is
			-- Set `title_font' to be used for the title to `a_font'.
		require
			a_font_exists: a_font /= Void
		do
			title_font := a_font
			update_title
		ensure
			title_font_set: title_font = a_font
		end	
	
	set_title (a_title: STRING) is
			-- Set title to `a_title'.
		require
			a_title_exists: a_title /= Void
		do
			title.set_value (a_title)
		ensure
			title_set: title.value.is_equal (a_title)
		end
	
	set_auto_resize (b: like box_auto_resize) is
			-- Should the box automatically resize?
		do
			box_auto_resize := b
		end
		
	set_visibility (b: like visible) is
			-- Set visibility of status box to `b'.
		do
			visible := b
		end
		
	toggle_visibility is
			-- Toggle visibility of status box.
		do
			set_visibility (not visible)
		end

	set_position_and_size (an_x: INTEGER; a_y: INTEGER; a_width: INTEGER; a_height: INTEGER) is
			-- Set status box to position (`an_x', `a_y') and size (`a_width', `a_height').
		do
			set_x_y (an_x, a_y)
			box.set_size (a_width, a_height)
		ensure
			positioned: x = an_x and y = a_y
			box_resized: box.width = a_width and box.height = a_height
		end		

feature -- Attributes		

	visible: BOOLEAN
			-- Is this status box visible?
	
	alignment: INTEGER
			-- Alignment of the lines.

	opacity: INTEGER
			-- Opacity of the background box.
	
	color: EM_COLOR
			-- Color of the background box.

	lines: EM_DRAWABLE_CONTAINER [EM_STRING]
			-- Text to be displayed.
		
	box: EM_RECTANGLE
			-- Box in the background.
	
	font: EM_COLOR_TTF_FONT
			-- Font of the text.
	
	title: EM_STRING
			-- Title of the status box, displayed on top.
	
	title_font: EM_COLOR_TTF_FONT
			-- Font used for `title'.

	max_line_width: INTEGER
			-- Width of longest line.
	
	text_height: INTEGER
			-- Height of all lines combined.
	
	box_auto_resize: BOOLEAN
			-- Should the box automatically determine its size according to the inserted lines?

feature {NONE} -- Constants

	Vertical_margin: INTEGER is 15
			-- Distance between top border <-> text, bottom border <-> text.
	
	Horizontal_margin: INTEGER is 18
			-- Distance between left border <-> text, right border <-> text.
		
	Padding: INTEGER is 5
			-- Padding between two lines.
		
feature {NONE} -- Implementation		

	update_color is
			-- Update color of the background box and its stroke.
		do
			box.fill_color.set_alpha (opacity)
			box.set_fill_color (color)
			box.set_line_color (color)
		end
		
	set_line_position (i: INTEGER) is
			-- Set position of line at index `i'.
		require
			valid_index: i > 0 and i <= lines.count
		local
			next_y: INTEGER
		do
			if i = 1 then
				next_y := box.y + Vertical_margin
			else 
				next_y := lines.item (i - 1).y + lines.item (i).height // 2 + Padding
			end
					
			if alignment = Left then
				lines.item (i).set_x_y (box.x + Horizontal_margin, next_y)
			elseif alignment = Right then
				if box_auto_resize then
					lines.item (i).set_x_y (box.x + max_line_width - lines.item (i).width - Horizontal_margin, next_y)							
				else
					lines.item (i).set_x_y (box.x + box.width - lines.item (i).width - Horizontal_margin, next_y)
				end
			else -- alignment = Centered
				if box_auto_resize then
					lines.item (i).set_x_y (box.x + (max_line_width + 2 * Horizontal_margin - lines.item (i).width) // 2, next_y)
				else
					lines.item (i).set_x_y (box.x + (box.width - lines.item (i).width) // 2, next_y)
				end
			end		
		ensure
			item_y_set: i = 1 implies lines.item (i).y	= box.y + Vertical_margin
						i /= 1 implies lines.item (i).y = lines.item (i - 1).y + lines.item (i).height // 2 + Padding
		-- TODO: item_x_set: viel zu verschachtelt f�r eine postcondition, oder?
		end
		
	update_lines is
			-- Update positions of all entries according to current alignment and font.
		local
			i: INTEGER
		do
			i := 1
			from
				lines.start
			until
				lines.after
			loop
				lines.item (i).set_font (font)
				if lines.item (i).width > max_line_width then
					max_line_width := lines.item (i).width
				end
				set_line_position (i)
				lines.forth
				i := i + 1
			end
			update_box
		ensure
		-- TODO: postcondition for every item in lines ??
		end

		
	update_title is
			-- Update title according to current `title_font'.
		do
			title.set_font (title_font)
			set_box_position
		ensure
			font_set: title.font = title_font
		end

	set_box_position is
			-- Set box to the correct position.
		do
			box.set_x_y (0, title.height // 2 + title.height // 18)
		ensure
			box_positioned: box.y = title.height // 2 + title.height // 18 and box.x = 0
		end	
		
	update_box is
			-- Update the background box
		do
			if box_auto_resize then
				box.set_size (max_line_width + Horizontal_margin * 2, text_height + Vertical_margin * 2)				
			end
			set_box_position
		end

	draw (a_surface: EM_SURFACE) is
			-- Draw 'Current' onto `surf'.
		local
			cursor: DS_LINKED_LIST_CURSOR [EM_DRAWABLE]
			translation: EM_VECTOR_2D
			old_clipping_area, clipping_area: EM_ORTHOGONAL_RECTANGLE
		do
			-- Translate coordinate system for drawing all contained objects.
			create translation.make (x, y)
			a_surface.translate_coordinates (translation)
			
			-- Change clipping area to clip all objects to container boundaries.
			old_clipping_area := a_surface.coordinate_area
			create clipping_area.make_from_coordinates (0, 0, width, height)
			clipping_area := clipping_area.intersection (old_clipping_area)
			a_surface.clip_coordinates (clipping_area)			
			
			-- Draw all contained objects if visible.
			if visible then
				cursor := new_cursor
				from
					cursor.start
				until
					cursor.off
				loop
					a_surface.draw_object (cursor.item)
					cursor.forth				
				end	
			end
			
			-- Reset coordinate system.
			a_surface.clip_coordinates (old_clipping_area)
			a_surface.translate_coordinates (- translation)
		end

invariant
	box_exists: box /= Void
	lines_exists: lines /= Void
	title_exists: title /= Void
	font_exists: font /= Void
	title_font_exists: title_font /= Void
end

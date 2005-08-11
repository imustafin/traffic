indexing
	description: "Display a player on the board"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	PLAYER_DISPLAYER

inherit

	EM_DRAWABLE
		redefine
			publish_mouse_event, out
		end
		
	EM_ANIMATABLE
		undefine
			out
		end
	
	HASHABLE
		undefine
			default_create, out
		end
	
	DISPLAY_CONSTANTS
		export
			{NONE} all
		undefine
			default_create, out
		end
	
	THEME
		undefine
			out
		end
	
feature -- Initialization
		
	make_from_player (a_player: PLAYER; a_pic: EM_DRAWABLE; a_traffic_map: TRAFFIC_MAP; a_map_widget: TRAFFIC_MAP_WIDGET) is
			-- Initialize displayer for `a_player'.
		require
			player_exists: a_player /= Void
		do
			player := a_player
			picture := a_pic
			create marking_circle.make_inside_box (picture.bounding_box)
			marking_circle.set_line_width (3)
			marking_circle.set_line_color (red)
			marking_circle.set_filled (false)
			update_position
		ensure
			player_set: player = a_player
			picture_set: picture = a_pic
		end

--feature -- Basic operations

--	clear is
--			-- Remove all players (clear_game).
--		do
----			unmark_player
----			remove_command (pixmap)
----			unmark_possible_moves_special
--		end
--	
--	clear_markings is
--			-- Remove all markings (end_game).
--		do
----			unmark_player
----			unmark_possible_moves_special
--		end
--		
--	animate_defeat is
--			-- Animate the defeat of the player.
----		local
----			cir: EM_CIRCLE
----			position: EM_VECTOR_2D
----			color: EM_COLOR
----			count: INTEGER
--		do
----			create position.make (player.location.position.x, player.location.position.y)
----			create cir.make (position)
----			create color.make_with_8_bit_rgb (0, 0, 0)
----			cir.set_color (color)
----			cir.set_diameter (50)
----			cir.draw (canvas)
----				-- Remove the last few commands if you use them in the loop
----			from
----				-- Fill
----			until
----				True
----				-- Replace `True' and fill
----			loop
----				-- Fill
----				process (80)
----				-- `process' should be kept, but you can change the number 
----			end
--		end
--		
--	process (msec: INTEGER) is
--				-- Wait and process events.
--		local
--			i: INTEGER
--		do
----			if not main_controller.break or not main_controller.game.is_game_over then
----				from
----					i := 0
----				until
----					i >= msec / 20 or main_controller.is_destroyed 
----				loop
----					main_controller.sleep (5)
----					i := i + 1	
----				end
----				main_controller.process_events
----				canvas.redraw
----			end
--		end

feature -- Access

	player: PLAYER
			-- Reference to player to be displayed

	picture: EM_DRAWABLE
			-- Picture for the player
			
	set_picture (a_pic: EM_DRAWABLE) is
			-- Set `picture' to `a_pic'.
		do
			picture := a_pic
			update_position
		end
		
	update_position is
			-- Update position to passenger's position.
		local
			pos: EM_VECTOR_2D
		do
			pos := player.position
			x := (pos.x.floor - (picture.width // 2))
			y := (pos.y.floor - (picture.height // 2))
			picture.set_x_y (x, y)		
			marking_circle.set_x_y (x, y)
		end	

	go_to_time (a_time: INTEGER) is
		do
			update_position			
		end
		
	draw (surface: EM_SURFACE) is
			-- Draw 'Current' onto `surf'.
		do
			if picture /= Void then
				surface.draw_object (picture)
			end
			if player.marked then
				surface.draw_object (marking_circle)
				mark_possible_moves
--			elseif traffic_map /= Void then
--				unmark_possible_moves
			end
		end
		
	width: INTEGER is
			-- 
		do
			Result := picture.width
		end
		
	height: INTEGER is
			-- 
		do
			Result := picture.height
		end

	hash_code: INTEGER

feature -- Mouse handling

	publish_mouse_event (a_mouse_event: EM_MOUSE_EVENT) is
		do
			if bounding_box.has (a_mouse_event.proportional_position) then
				dispatch_mouse_event (a_mouse_event)								
				
				-- Passenger does not catch ...
				-- a_mouse_event.set_caught (True)
			end			
		end
	
feature -- Status report

	statistics: ARRAYED_LIST [STRING] is
			-- Number of tickets left etc.
		deferred
		end
		
	out: STRING is
		do
			Result := player.name
		end
		
		
feature {NONE} -- Implementation

	mark_possible_moves is
			-- Mark all possible places that the player can move to.
		local
			place_renderer: TRAFFIC_PLACE_RENDERER
		do
			-- Set place color for possible moves to yellow
			create place_renderer.make_with_map (traffic_map)
			place_renderer.set_place_color (Yellow)
			from
				player.possible_moves.start
			until
				player.possible_moves.after
			loop
				map_widget.set_place_special_renderer (place_renderer, player.possible_moves.item.destination)
				-- Re-Render the Scene for the effects to be visible
				map_widget.render
				player.possible_moves.forth
			end
		end

	unmark_possible_moves is
			-- Remove marking of possible moves.
		local
			place_renderer: TRAFFIC_PLACE_RENDERER
		do
			-- Set place color for possible moves to yellow
			create place_renderer.make_with_map (traffic_map)
			place_renderer.set_place_color (Blue)
			from
				player.possible_moves.start
			until
				player.possible_moves.after
			loop
				map_widget.set_place_special_renderer (place_renderer, player.possible_moves.item.destination)
				-- Re-Render the Scene for the effects to be visible
				map_widget.render
				player.possible_moves.forth
			end
		end
		
feature {NONE} -- Implementation
		
	marking_circle: EM_CIRCLE
			-- Circle for marking current player
	
	traffic_map: TRAFFIC_MAP
			-- Reference to map where game takes place
	
	map_widget: TRAFFIC_MAP_WIDGET
			-- Reference to map widget where player gets displayed

--	main_controller: MAIN_CONTROLLER
			-- Used to access sleep and process_events
		
invariant
	displayer_has_player: player /= Void

end

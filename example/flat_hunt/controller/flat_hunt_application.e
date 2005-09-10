indexing
	description: "Application settings and launch."
	date: "$Date$"
	revision: "$Revision$"
	
class
	FLAT_HUNT_APPLICATION

inherit
	
	EM_APPLICATION
	
	EM_AUDIO_CONSTANTS
	
	SHARED_SCENES
		undefine
			default_create
		end
		
	EM_SHARED_STANDARD_FONTS
	
	THEME
		undefine
			default_create
		end
	
	SHARED_MUSIC_PLAYER
		
create
	make_and_launch

feature -- Initialization

	make_and_launch is
			-- Create and execute the application.
		local
			start_menu_scene: START_MENU_SCENE
		do
			-- Video subsystem settings.
			video_subsystem.enable
--			video_subsystem.set_fullscreen (True)
--			video_subsystem.show_cursor
			video_subsystem.set_doublebuffered (True)			
			video_subsystem.set_video_surface_width (Window_width)			
			video_subsystem.set_video_surface_height (Window_height)
		
			-- Audio subsystem settings.
			audio_subsystem.enable
			audio_subsystem.mixer.open (Em_default_frequency, Em_audio_format_s16sys, Em_stereo, Em_default_chunk_size)

			-- Initialize the screen.
			initialize_screen
			set_application_name (My_application_name)
--			set_application_icon (Application_icon)
			
			-- Begin playing the game music.
			music_player.play_game_music

			-- Set and launch the first scene.
			create start_menu_scene.make_scene
			create game.make
			adjust_game_settings			
			start_menu_scene.set_game (game)
			set_scene (start_menu_scene)	
			launch
			video_subsystem.disable
		end
		
	adjust_game_settings is
			-- Adjust game settings
		do
			-- Do nothing. Redefined in class START.
		end
		
feature	-- Access

	game: GAME
			-- The game which will be played.
		
end

indexing
	description	: "Root class for this application."
	author		: "Generated by the New Vision2 Application Wizard."
	date		: "$Date: 2007/7/16 12:52:13 $"
	revision	: "1.0.0"

class
	APPLICATION

inherit
	EV_APPLICATION

create
	make_and_launch

feature {NONE} -- Initialization

	make_and_launch is
			-- Initialize and launch application
		do
			default_create
			prepare
			launch
		end

	prepare is
			-- Prepare the first window to be displayed.
		local
			construction: CONSTRUCTION
		do
			create first_window
			create construction
			first_window.set_example (construction, agent construction.build)
			first_window.set_title ("Assignment 7 (buildings in Paris)")
			first_window.show
		end

feature {NONE} -- Implementation

	first_window: TRAFFIC_MAIN_WINDOW
			-- Main window.

end -- class APPLICATION

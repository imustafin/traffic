indexing
	description: "Objects that represent an EV_TITLED_WINDOW.%
		%The original version of this class was generated by EiffelBuild."
	date: "$Date: 2006-09-21 16:27:08 -0700 (Thu, 21 Sep 2006) $"
	revision: "$Revision: 63791 $"

class
	MAIN_WINDOW

inherit
	MAIN_WINDOW_IMP
		redefine
			destroy
		end


feature {NONE} -- Initialization

	user_initialization is
			-- Called by `initialize'.
			-- Any custom user initialization that
			-- could not be performed in `initialize',
			-- (due to regeneration of implementation class)
			-- can be added here.
		do

			-- directory dialog
			create dir1_dialog
			dir1_dialog.ok_actions.extend (agent dir1_action)
			l_ev_button_1.select_actions.extend (agent dir1_dialog.show_modal_to_window (current))

			-- browse directory for traffic location
			create dir2_dialog
			dir2_dialog.ok_actions.extend (agent dir2_action)
			dir2_dialog.cancel_actions.extend (agent dir2_cancel)
			l_ev_button_2.select_actions.extend (agent dir2_dialog.show_modal_to_window (current))

			-- generate button
			l_ev_button_3.select_actions.extend (agent generate)

			-- cross for closing app
			close_request_actions.extend (agent destroy)


		end

feature {NONE} -- Implementation

		dir1_dialog, dir2_dialog: EV_DIRECTORY_DIALOG

		dir1_action is
				-- set the directory to the text field
			do
				l_ev_text_field_2.set_text (dir1_dialog.directory)
			end

		dir2_action is
				-- same as above
			do
				l_ev_text_field_3.set_text (dir2_dialog.directory)
			end

		dir2_cancel is
				-- do nothing
			do
				-- nothing
			end

		dir1_cancel is
				-- do nothing
			do
				-- nothing
			end

		generate is
				-- check form values and create files
			local
				name, dir, traf:STRING
				error, success:BOOLEAN
				touch_app:TOUCH_APP
				dialog:EV_INFORMATION_DIALOG
				dialog1, dialog2, dialog3:EV_WARNING_DIALOG
			do
				-- init
				error := false
				create dialog.default_create

				-- system name
				name := l_ev_text_field_1.text;
				if name.count=0 then
					create dialog1.make_with_text ("You did not specify a System Name!")
					dialog1.show_modal_to_window (current)
					error := true;
				end

				-- system dir
				dir := l_ev_text_field_2.text;
				if dir.count=0 then
					create dialog2.make_with_text ("You did not specify a System Directory!")
					dialog2.show_modal_to_window (current)
					error := true;
				end

				-- traffic dir
				traf := l_ev_text_field_3.text;
				if traf.count=0 then
					create dialog3.make_with_text ("You did not specify the directory where Traffic lies!")
					dialog3.show_modal_to_window (current)
					error := true
				end

				if error=false then
					create touch_app.make(name, dir, traf)
					success := touch_app.generate
					if success=true then
						-- ok box
						dialog.set_text ("Files generated successfully.")
					else
						-- not ok box
						dialog.set_text ("There was some error...")
					end
					dialog.show_modal_to_window (current)
				end
			end

	destroy is
			-- close app
		do
			Precursor {MAIN_WINDOW_IMP};
			(create {EV_ENVIRONMENT}).application.destroy
		end



end

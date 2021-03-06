#include <node.h>
#include <gtk/gtk.h>
#include "node_gui_type.h"

namespace clip {
using namespace v8;

void Type::Init (Handle<v8::Object> target) {
    HandleScope scope;

    #define SET(name, value) \
        gtype->Set (String::New (name), Integer::New (value))

    Local<Object> gtype = Object::New ();
    SET ("AboutDialog"          , gtk_about_dialog_get_type           () ) ;
    SET ("AccelGroup"           , gtk_accel_group_get_type            () ) ;
    SET ("AccelLabel"           , gtk_accel_label_get_type            () ) ;
    SET ("Action"               , gtk_action_get_type                 () ) ;
    SET ("ActionGroup"          , gtk_action_group_get_type           () ) ;
    SET ("Adjustment"           , gtk_adjustment_get_type             () ) ;
    SET ("Alignment"            , gtk_alignment_get_type              () ) ;
    SET ("Arrow"                , gtk_arrow_get_type                  () ) ;
    SET ("AspectFrame"          , gtk_aspect_frame_get_type           () ) ;
    SET ("Assistant"            , gtk_assistant_get_type              () ) ;
    SET ("Bin"                  , gtk_bin_get_type                    () ) ;
    SET ("Box"                  , gtk_box_get_type                    () ) ;
    SET ("Builder"              , gtk_builder_get_type                () ) ;
    SET ("Button"               , gtk_button_get_type                 () ) ;
    SET ("ButtonBox"            , gtk_button_box_get_type             () ) ;
    SET ("Calendar"             , gtk_calendar_get_type               () ) ;
    SET ("CellRenderer"         , gtk_cell_renderer_get_type          () ) ;
    SET ("CellRendererAccel"    , gtk_cell_renderer_accel_get_type    () ) ;
    SET ("CellRendererCombo"    , gtk_cell_renderer_combo_get_type    () ) ;
    SET ("CellRendererPixbuf"   , gtk_cell_renderer_pixbuf_get_type   () ) ;
    SET ("CellRendererProgress" , gtk_cell_renderer_progress_get_type () ) ;
    SET ("CellRendererSpin"     , gtk_cell_renderer_spin_get_type     () ) ;
    SET ("CellRendererSpinner"  , gtk_cell_renderer_spinner_get_type  () ) ;
    SET ("CellRendererText"     , gtk_cell_renderer_text_get_type     () ) ;
    SET ("CellRendererToggle"   , gtk_cell_renderer_toggle_get_type   () ) ;
    SET ("CellView"             , gtk_cell_view_get_type              () ) ;
    SET ("CheckButton"          , gtk_check_button_get_type           () ) ;
    SET ("CheckMenuItem"        , gtk_check_menu_item_get_type        () ) ;
    SET ("Clipboard"            , gtk_clipboard_get_type              () ) ;
    SET ("ColorButton"          , gtk_color_button_get_type           () ) ;
    SET ("ColorSelection"       , gtk_color_selection_get_type        () ) ;
    SET ("ColorSelectionDialog" , gtk_color_selection_dialog_get_type () ) ;
    SET ("ComboBox"             , gtk_combo_box_get_type              () ) ;
    SET ("ComboBoxText"         , gtk_combo_box_text_get_type         () ) ;
    SET ("Container"            , gtk_container_get_type              () ) ;
    SET ("Dialog"               , gtk_dialog_get_type                 () ) ;
    SET ("DrawingArea"          , gtk_drawing_area_get_type           () ) ;
    SET ("Entry"                , gtk_entry_get_type                  () ) ;
    SET ("EntryBuffer"          , gtk_entry_buffer_get_type           () ) ;
    SET ("EntryCompletion"      , gtk_entry_completion_get_type       () ) ;
    SET ("EventBox"             , gtk_event_box_get_type              () ) ;
    SET ("Expander"             , gtk_expander_get_type               () ) ;
    SET ("FileChooserButton"    , gtk_file_chooser_button_get_type    () ) ;
    SET ("FileChooserDialog"    , gtk_file_chooser_dialog_get_type    () ) ;
    SET ("FileChooserWidget"    , gtk_file_chooser_widget_get_type    () ) ;
    SET ("FileFilter"           , gtk_file_filter_get_type            () ) ;
    SET ("Fixed"                , gtk_fixed_get_type                  () ) ;
    SET ("FontButton"           , gtk_font_button_get_type            () ) ;
    SET ("FontSelection"        , gtk_font_selection_get_type         () ) ;
    SET ("FontSelectionDialog"  , gtk_font_selection_dialog_get_type  () ) ;
    SET ("Frame"                , gtk_frame_get_type                  () ) ;
    SET ("Hbox"                 , gtk_hbox_get_type                   () ) ;
    SET ("HbuttonBox"           , gtk_hbutton_box_get_type            () ) ;
    SET ("Hpaned"               , gtk_hpaned_get_type                 () ) ;
    SET ("Hscale"               , gtk_hscale_get_type                 () ) ;
    SET ("Hscrollbar"           , gtk_hscrollbar_get_type             () ) ;
    SET ("Hseparator"           , gtk_hseparator_get_type             () ) ;
    SET ("HandleBox"            , gtk_handle_box_get_type             () ) ;
    SET ("IconFactory"          , gtk_icon_factory_get_type           () ) ;
    SET ("IconTheme"            , gtk_icon_theme_get_type             () ) ;
    SET ("IconView"             , gtk_icon_view_get_type              () ) ;
    SET ("Image"                , gtk_image_get_type                  () ) ;
    SET ("ImageMenuItem"        , gtk_image_menu_item_get_type        () ) ;
    SET ("InfoBar"              , gtk_info_bar_get_type               () ) ;
    SET ("Invisible"            , gtk_invisible_get_type              () ) ;
    SET ("Label"                , gtk_label_get_type                  () ) ;
    SET ("Layout"               , gtk_layout_get_type                 () ) ;
    SET ("LinkButton"           , gtk_link_button_get_type            () ) ;
    SET ("ListStore"            , gtk_list_store_get_type             () ) ;
    SET ("Menu"                 , gtk_menu_get_type                   () ) ;
    SET ("MenuBar"              , gtk_menu_bar_get_type               () ) ;
    SET ("MenuItem"             , gtk_menu_item_get_type              () ) ;
    SET ("MenuShell"            , gtk_menu_shell_get_type             () ) ;
    SET ("MenuToolButton"       , gtk_menu_tool_button_get_type       () ) ;
    SET ("MessageDialog"        , gtk_message_dialog_get_type         () ) ;
    SET ("Misc"                 , gtk_misc_get_type                   () ) ;
    SET ("Notebook"             , gtk_notebook_get_type               () ) ;
    SET ("OffscreenWindow"      , gtk_offscreen_window_get_type       () ) ;
    SET ("PageSetup"            , gtk_page_setup_get_type             () ) ;
    SET ("Paned"                , gtk_paned_get_type                  () ) ;
    SET ("Plug"                 , gtk_plug_get_type                   () ) ;
    SET ("PrintContext"         , gtk_print_context_get_type          () ) ;
    SET ("PrintOperation"       , gtk_print_operation_get_type        () ) ;
    SET ("PrintSettings"        , gtk_print_settings_get_type         () ) ;
    SET ("ProgressBar"          , gtk_progress_bar_get_type           () ) ;
    SET ("RadioAction"          , gtk_radio_action_get_type           () ) ;
    SET ("RadioButton"          , gtk_radio_button_get_type           () ) ;
    SET ("RadioMenuItem"        , gtk_radio_menu_item_get_type        () ) ;
    SET ("RadioToolButton"      , gtk_radio_tool_button_get_type      () ) ;
    SET ("Range"                , gtk_range_get_type                  () ) ;
    SET ("RecentAction"         , gtk_recent_action_get_type          () ) ;
    SET ("RecentChooserDialog"  , gtk_recent_chooser_dialog_get_type  () ) ;
    SET ("RecentChooserMenu"    , gtk_recent_chooser_menu_get_type    () ) ;
    SET ("RecentChooserWidget"  , gtk_recent_chooser_widget_get_type  () ) ;
    SET ("RecentFilter"         , gtk_recent_filter_get_type          () ) ;
    SET ("RecentManager"        , gtk_recent_manager_get_type         () ) ;
    SET ("Scale"                , gtk_scale_get_type                  () ) ;
    SET ("ScaleButton"          , gtk_scale_button_get_type           () ) ;
    SET ("Scrollbar"            , gtk_scrollbar_get_type              () ) ;
    SET ("ScrolledWindow"       , gtk_scrolled_window_get_type        () ) ;
    SET ("Separator"            , gtk_separator_get_type              () ) ;
    SET ("SeparatorMenuItem"    , gtk_separator_menu_item_get_type    () ) ;
    SET ("SeparatorToolItem"    , gtk_separator_tool_item_get_type    () ) ;
    SET ("Settings"             , gtk_settings_get_type               () ) ;
    SET ("SizeGroup"            , gtk_size_group_get_type             () ) ;
    SET ("Socket"               , gtk_socket_get_type                 () ) ;
    SET ("SpinButton"           , gtk_spin_button_get_type            () ) ;
    SET ("Spinner"              , gtk_spinner_get_type                () ) ;
    SET ("StatusIcon"           , gtk_status_icon_get_type            () ) ;
    SET ("Statusbar"            , gtk_statusbar_get_type              () ) ;
    SET ("Table"                , gtk_table_get_type                  () ) ;
    SET ("TearoffMenuItem"      , gtk_tearoff_menu_item_get_type      () ) ;
    SET ("TextBuffer"           , gtk_text_buffer_get_type            () ) ;
    SET ("TextChildAnchor"      , gtk_text_child_anchor_get_type      () ) ;
    SET ("TextMark"             , gtk_text_mark_get_type              () ) ;
    SET ("TextTag"              , gtk_text_tag_get_type               () ) ;
    SET ("TextTagTable"         , gtk_text_tag_table_get_type         () ) ;
    SET ("TextView"             , gtk_text_view_get_type              () ) ;
    SET ("ToggleAction"         , gtk_toggle_action_get_type          () ) ;
    SET ("ToggleButton"         , gtk_toggle_button_get_type          () ) ;
    SET ("ToggleToolButton"     , gtk_toggle_tool_button_get_type     () ) ;
    SET ("ToolButton"           , gtk_tool_button_get_type            () ) ;
    SET ("ToolItem"             , gtk_tool_item_get_type              () ) ;
    SET ("ToolItemGroup"        , gtk_tool_item_group_get_type        () ) ;
    SET ("ToolPalette"          , gtk_tool_palette_get_type           () ) ;
    SET ("Toolbar"              , gtk_toolbar_get_type                () ) ;
    SET ("Tooltip"              , gtk_tooltip_get_type                () ) ;
    SET ("TreeModelFilter"      , gtk_tree_model_filter_get_type      () ) ;
    SET ("TreeModelSort"        , gtk_tree_model_sort_get_type        () ) ;
    SET ("TreeSelection"        , gtk_tree_selection_get_type         () ) ;
    SET ("TreeStore"            , gtk_tree_store_get_type             () ) ;
    SET ("TreeView"             , gtk_tree_view_get_type              () ) ;
    SET ("TreeViewColumn"       , gtk_tree_view_column_get_type       () ) ;
    SET ("UiManager"            , gtk_ui_manager_get_type             () ) ;
    SET ("Vbox"                 , gtk_vbox_get_type                   () ) ;
    SET ("VbuttonBox"           , gtk_vbutton_box_get_type            () ) ;
    SET ("Vpaned"               , gtk_vpaned_get_type                 () ) ;
    SET ("Vscale"               , gtk_vscale_get_type                 () ) ;
    SET ("Vscrollbar"           , gtk_vscrollbar_get_type             () ) ;
    SET ("Vseparator"           , gtk_vseparator_get_type             () ) ;
    SET ("Viewport"             , gtk_viewport_get_type               () ) ;
    SET ("VolumeButton"         , gtk_volume_button_get_type          () ) ;
    SET ("Widget"               , gtk_widget_get_type                 () ) ;
    SET ("Window"               , gtk_window_get_type                 () ) ;
    SET ("WindowGroup"          , gtk_window_group_get_type           () ) ;

    target->Set (String::New ("GType"), gtype);
    #undef SET

    #define SET(name, value) \
        target->Set (String::New (name), Integer::New (value))

    // GType
    SET ("TYPE_INVALID"  , G_TYPE_INVALID   ) ;
    SET ("TYPE_NONE"     , G_TYPE_NONE      ) ;
    SET ("TYPE_INTERFACE", G_TYPE_INTERFACE ) ;
    SET ("TYPE_CHAR"     , G_TYPE_CHAR      ) ;
    SET ("TYPE_UCHAR"    , G_TYPE_UCHAR     ) ;
    SET ("TYPE_BOOLEAN"  , G_TYPE_BOOLEAN   ) ;
    SET ("TYPE_INT"      , G_TYPE_INT       ) ;
    SET ("TYPE_UINT"     , G_TYPE_UINT      ) ;
    SET ("TYPE_LONG"     , G_TYPE_LONG      ) ;
    SET ("TYPE_ULONG"    , G_TYPE_ULONG     ) ;
    SET ("TYPE_INT64"    , G_TYPE_INT64     ) ;
    SET ("TYPE_UINT64"   , G_TYPE_UINT64    ) ;
    SET ("TYPE_ENUM"     , G_TYPE_ENUM      ) ;
    SET ("TYPE_FLAGS"    , G_TYPE_FLAGS     ) ;
    SET ("TYPE_FLOAT"    , G_TYPE_FLOAT     ) ;
    SET ("TYPE_DOUBLE"   , G_TYPE_DOUBLE    ) ;
    SET ("TYPE_STRING"   , G_TYPE_STRING    ) ;
    SET ("TYPE_POINTER"  , G_TYPE_POINTER   ) ;
    SET ("TYPE_BOXED"    , G_TYPE_BOXED     ) ;
    SET ("TYPE_PARAM"    , G_TYPE_PARAM     ) ;
    SET ("TYPE_OBJECT"   , G_TYPE_OBJECT    ) ;
    SET ("TYPE_GTYPE"    , G_TYPE_GTYPE     ) ;
    SET ("TYPE_VARIANT"  , G_TYPE_VARIANT   ) ;

    #undef SET
}
} /* clip */

#include "node_gui.h"
#include "node_gui_global.h"
#include "node_gui_type.h"
#include "node_gui_clipboard.h"
#include "node_gui_object.h"
#include "node_gui_tree_model.h"
#include "node_gui_tree_path.h"
#include "node_gui_tree_iter.h"
#include "node_gui_text_iter.h"
#include "node_gui_text_buffer.h"
#include "node_gui_list_store.h"
#include "node_gui_widget.h"
#include "node_gui_entry.h"
#include "node_gui_misc.h"
#include "node_gui_image.h"
#include "node_gui_label.h"
#include "node_gui_container.h"
#include "node_gui_tree_view.h"
#include "node_gui_text_view.h"
#include "node_gui_bin.h"
#include "node_gui_notebook.h"
#include "node_gui_list.h"
#include "node_gui_window.h"
#include "node_gui_dialog.h"
#include "node_gui_message_dialog.h"
#include "node_gui_about_dialog.h"
#include "node_gui_menu.h"
#include "node_gui_button.h"
#include "node_gui_builder.h"
#include "node_gui_status_icon.h"

namespace clip {
void Init (Handle<v8::Object> target) {
    HandleScope scope;

    uv_ref (uv_default_loop ());

    // Init GTK+ in node thread
    g_thread_init (NULL);
    gdk_threads_init ();
    gtk_init (NULL, NULL);

    clip::Global::Init (target);
    clip::Type::Init (target);
    clip::Object::Init (target);
    clip::TreeModel::Init (target);
    clip::TreePath::Init (target);
    clip::TreeIter::Init (target);
    clip::TextIter::Init (target);
    clip::TextBuffer::Init (target);
    clip::ListStore::Init (target);
    clip::Clipboard::Init (target);
    clip::Widget::Init (target);
    clip::Entry::Init (target);
    clip::Misc::Init (target);
    clip::Image::Init (target);
    clip::Label::Init (target);
    clip::Container::Init (target);
    clip::Bin::Init (target);
    clip::TreeView::Init (target);
    clip::TextView::Init (target);
    clip::Window::Init (target);
    clip::Dialog::Init (target);
    clip::MessageDialog::Init (target);
    clip::AboutDialog::Init (target);
    clip::Menu::Init (target);
    clip::Notebook::Init (target);
    clip::List::Init (target);
    clip::Button::Init (target);
    clip::Builder::Init (target);
    clip::StatusIcon::Init (target);
}
} /* clip */

#ifdef WIN32
NODE_MODULE(node_gui, clip::Init)
#endif

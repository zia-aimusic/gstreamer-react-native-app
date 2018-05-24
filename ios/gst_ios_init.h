#ifndef __GST_IOS_INIT_H__
#define __GST_IOS_INIT_H__

#include <GStreamer/gst/gst.h>

G_BEGIN_DECLS

#define GST_G_IO_MODULE_DECLARE(name) \
extern void G_PASTE(g_io_module_, G_PASTE(name, _load_static)) (void)

#define GST_G_IO_MODULE_LOAD(name) \
G_PASTE(g_io_module_, G_PASTE(name, _load_static)) ()

/* Uncomment each line to enable the plugin categories that your application needs.
 * You can also enable individual plugins. See gst_ios_init.c to see their names
 */

//#define GST_IOS_PLUGINS_GES
#define GST_IOS_PLUGIN_COREELEMENTS
#
//#define GST_IOS_PLUGINS_CORE
//#define GST_IOS_PLUGIN_AUDIORESAMPLE

#define GST_IOS_PLUGINS_CORE

//#define GST_IOS_PLUGINS_PLAYBACK
#define GST_IOS_PLUGINS_EFFECTS



#define GST_IOS_GIO_MODULE_GNUTLS

void gst_ios_init ();

#include <GStreamer/gio/gio.h>
GST_G_IO_MODULE_DECLARE(gnutls);

G_END_DECLS

#endif

#include <gtk/gtk.h>
#include <stdio.h>

//gresource list /kanapi_0.12/packages/gtk3+-3.24.51/lib/libgtk-3.so


int check_file(const char *pic)
{
    GdkPixbuf *pb;
    GError * error=NULL;
    pb = gdk_pixbuf_new_from_file(pic, &error);
    if (!pb) {
        g_printerr("Error: %s\n", error->message);
        return 1;
    }
    
    printf("pb=%p\n", pb);    
    int w = gdk_pixbuf_get_width(pb);
    int h = gdk_pixbuf_get_height(pb);
    int channels = gdk_pixbuf_get_n_channels(pb);
    gboolean alpha = gdk_pixbuf_get_has_alpha(pb);
    int bps = gdk_pixbuf_get_bits_per_sample(pb);
    int stride = gdk_pixbuf_get_rowstride(pb);
    
    const char *type = gdk_pixbuf_get_option(pb, "mime-type");
    const char *loader = gdk_pixbuf_get_option(pb, "loader");
    
    printf("%s: w=%d h=%d channels=%d alpha=%d bps=%d stride=%d type=%s loader=%s\n", 
            pic, w, h, channels, alpha, bps, stride, type, loader);

    cairo_surface_t *surface =
    gdk_cairo_surface_create_from_pixbuf(pb, 0, NULL);

    if (cairo_surface_status(surface) != CAIRO_STATUS_SUCCESS) {
        printf("cairo error\n");
    } else 
        printf("cairo ok\n");

    g_object_unref(pb);
    return 0;
}

int check_stream(const char *pic)
{
    GError *error = NULL;
    GFile *f = g_file_new_for_path(pic);
    GInputStream *s = G_INPUT_STREAM(g_file_read(f, NULL, &error));

    GdkPixbuf *pb = gdk_pixbuf_new_from_stream_at_scale( s, 24, 24, TRUE, NULL, &error);

    if (!pb)
        g_printerr("ERR: %s\n", error->message);
    else {
        printf("stream %s ok\n", pic);
        g_object_unref(pb);
    }
}

int test1()
{
    GtkWidget *window, *image;
    GError *error = NULL;

    GdkPixbuf *pb = gdk_pixbuf_new_from_resource( "/org/gtk/libgtk/theme/Adwaita/assets/check-symbolic.svg", &error);

    if (!pb) {
        g_printerr("Failed to load SVG: %s\n", error->message);
        return 1;
    }

    image = gtk_image_new_from_pixbuf(pb);
    g_object_unref(pb);

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_container_add(GTK_CONTAINER(window), image);

    gtk_widget_show_all(window);

    gtk_main();

    return 0;
}

int test2()
{
    GError *error = NULL;
    //GdkPixbuf *pb = gdk_pixbuf_new_from_resource("/org/gtk/libgtk/icons/24x24/status/image-missing.png", &error);
    GdkPixbuf *pb = gdk_pixbuf_new_from_resource( "/org/gtk/libgtk/theme/Adwaita/assets/check-symbolic.svg", &error);
    GtkWidget *image = gtk_image_new_from_pixbuf(pb);
    GtkWidget *box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
    gtk_box_pack_start(GTK_BOX(box), image, TRUE, TRUE, 0);
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_container_add(GTK_CONTAINER(window), box);

    gtk_widget_show_all(window);
    gtk_main();
}

int test3()
{
    GtkWidget *window, *image;
    GIcon *icon;
    GError *error = NULL;

//    icon = g_icon_new_for_string("/org/gtk/libgtk/icons/24x24/status/image-missing.png", &error);
    icon = g_icon_new_for_string( "/org/gtk/libgtk/theme/Adwaita/assets/check-symbolic.svg", &error);

    image = gtk_image_new_from_gicon(icon, GTK_ICON_SIZE_DIALOG);

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_container_add(GTK_CONTAINER(window), image);

    gtk_widget_show_all(window);

    gtk_main();
    return 0;
}

int main(int argc, char **argv)
{
    gtk_init(&argc, &argv);
    
    check_file("apps/pingwin.png");
    check_file("apps/pingwin.svg");
    
    check_stream("apps/pingwin.png");
    check_stream("apps/pingwin.svg");

    //test1();
//    test2();
    test3();
    return 0;
}


struct Color {
	int r;
	int g;
	int b;
};

enum ColorChannel { COLOR_CHANNEL_RED, COLOR_CHANNEL_GREEN, COLOR_CHANNEL_BLUE };

// Misc
struct Color color_pick ();
struct Color color_apply (struct Color *c, int amount);
char *create_color_range_gradient(struct Color c, enum ColorChannel, char*buffer);
struct Color color_from_hex(char *hex);
void color_get_dominant(const char*path, struct Color *c);

// Color Conversion Functions
char* color_to_hex(struct Color *color, char*space);
char* color_to_rgb(struct Color *color, char*space);
char *color_to_hsv(struct Color *color, char*space);

// Get & Set Widget Background
void color_set_bg(struct Color *color_data, GtkWidget *widget, char* space);
struct Color color_get_bg(GtkWidget *self);

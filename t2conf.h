#ifndef T2CONF_H
#define T2CONF_H

#include <stdio.h>
#include <stdlib.h>

extern void tint2rc_parse(const char *filename, int screen_width,
			  int screen_height);
extern int tint2rc_is_horizontal_panel(void);

#endif /* T2CONF_H */

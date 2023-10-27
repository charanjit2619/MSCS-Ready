#ifndef PALETTE_H
#define PALETTE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* define a structure named color */
struct color {
	char name[20];
	char code;
	int red_val;
	int green_val;
	int blue_val;
};

/* 
 * function prototypes - use them all here in p6b
 */
int get_palette(char fname[], struct color pal[], int size);

void show_palette(struct color pal[], int size);

struct color choose_closest(struct color pal[], int size, struct color orig_color);

void map_to_palette(char input_image_fname[80], char output_image_fname[80], 
		struct color palette[], int palette_size);

#endif


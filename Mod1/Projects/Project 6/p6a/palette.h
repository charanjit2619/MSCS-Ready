#ifndef PALETTE_H
#define PALETTE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* define a structure named color
 * it should the members: name, code, red_val, green_val and blue_val
 * name should be an array of 20 characters
 * code should be a single characters
 * and red_val, green_val and blue_val should be integers
 */
 // Step 1: --> your code here

 struct color{
    char code;
    int red_val;
    int green_val;
    int blue_val;
    char name[20];
 };

/* function prototypes used in p6a*/
int get_palette(char fname[], struct color pal[], int size);
void show_palette(struct color pal[], int size);

/*
 * choose_closest and map_to_palette are not used in p6a
 * and are thus commented out here
 * you'll use them in p6b
 */

/*
	struct color choose_closest(struct color pal[], int size,
		struct color orig_color);

	void map_to_palette(char input_image_fname[80], char output_image_fname[80],
		struct color palette[], int palette_size);
*/

#endif


#ifndef IMAGES_H
#define IMAGES_H
#include <stdio.h>

int make_rect(FILE *outfile, int cols, int rows, int red, int green, int blue);
int stripes(FILE *outfile, int cols, int rows, int num_stripes, int reds[], int greens[], int blues[]);
int vert_stripes(FILE *outfile, int cols, int rows, int num_stripes, int reds[], int greens[], int blues[]);
int four_square(FILE *outfile, int cols, int rows, int reds[], int greens[], int blues[]);

#endif



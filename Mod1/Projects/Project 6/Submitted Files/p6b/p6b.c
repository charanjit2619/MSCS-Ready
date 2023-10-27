/*
 * Project 6
 * CPSC 6810, Fall 2023
 * p6b.c
 * Charanjit Singh
 * This program exercises knowledge of structures, functions,
 * command line parameters, parameter passing and file i/o
 * The user provides the name of a file containing a palette of colors,
 * an input image and an output image.
 * The program reads in and displays the palette file, then maps each
 * pixel of the PPM P6 format input file to the closest color found
 * in the color palette, and writes it to the output file.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "palette.h"

int main(int argc, char *argv[]){
	// variables for filenames
	char palette_fname[80];
	char input_image_fname[80];
	char output_image_fname[80];
	int palette_size;

	if (argc !=5){
		fprintf(stderr, "usage: %s infile outfile palette_file palette_size\n", argv[0]);
		exit(0);
	}

	// extract the command line parameters
	strcpy(input_image_fname, argv[1]);
	strcpy(output_image_fname, argv[2]);
	strcpy(palette_fname, argv[3]);
	palette_size = atoi(argv[4]);

	/* create an array named "palette" of color structs for a palette of that size */
	struct color palette[palette_size];

	/* 
	 * invoke get_palette to fill the array with values from the file, passing in:
	 * - the name of the palette file
	 * - the array of color structs to be filled in 
	 * - the size of the palette
	*/
	get_palette(palette_fname, palette, palette_size);

	/*
	 * we don't call display_palette in p6b
	 * that was just for testing in p6a
	 */

	/*
  	 * invoke map_to_palette, passing in:
	 *	- the name of the input file
	 * - the name of the output file
	 * - the palette of color structs
	 * - the size of the palette
	 * This function should:
	 * 	- copy the header from the input file to the output file
	 * 	- and they for every pixel (3 bytes) in the input file
	 * 		- read the pixel from the input file
	 *			- find the closest matching color in the palette
	 *			- write a pixel of the new color to the output file
	 */
	map_to_palette(input_image_fname, output_image_fname, palette, palette_size);

	return 0;
}



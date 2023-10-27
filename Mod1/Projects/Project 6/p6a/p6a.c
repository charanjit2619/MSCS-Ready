/*
 * Project 6
 * CPSC 6810, Fall 2023
 * p6a.c
 * Eileen Kraemer
 * This program exercises knowledge of structures, functions,
 * command line parameters, parameter passing and file i/o
 *
 * This program reads in and displays a palette file
 * into an array of color structs
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "palette.h"

int main(int argc, char *argv[]){
	// variables for filenames
	char palette_fname[80];
	int palette_size;

	if (argc !=3){
		fprintf(stderr, "usage: %s palette_file palette_size\n", argv[0]);
		exit(0);
	}
	// extract the command line parameters
	strcpy(palette_fname, argv[1]);
	palette_size = atoi(argv[2]);


	/* create array "palette" of color structs for a palette of specified size */
	// #2: your line of code goes here 
	struct color palette[palette_size];
	
	/* 
	 * invoke get_palette to fill array with values from the file, passing in:
	 * - the name of the palette file
	 * - the array of color structs to be filled in 
	 * - the size of the palette
	*/

	// #3: your line of code goes here 
	get_palette(palette_fname, palette, palette_size);
	/* 
    *	then invoke show_palette to display the palette, passing in:
	* - the palette of color structs
	* - the size of the palette
	*/

	// #4: your line of code goes here 	
	show_palette(palette, palette_size);


	return 0;
}



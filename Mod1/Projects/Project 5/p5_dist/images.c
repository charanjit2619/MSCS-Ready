/*
 * Charanjit Singh
 * Username: charans
 * CPSC 6810 MSCS Ready, Module 1, Fall 2023
 * Date: 10/9/2023
 * Project 5: Image Files 
 * Code Summary:
 * Implementation of four functions which are used to 
 * create PPM image files of desired pattern and dimensions
 */

#include "images.h"

int make_rect(FILE *outfile, int cols, int rows, int red, int green, int blue){

	// write header
	fprintf(outfile, "P6\n %d %d 255\n", cols, rows);

	// write image array
	for (int i = 0; i < cols * rows; i++){
		fprintf(outfile, "%c%c%c", (unsigned char) red, (unsigned char) green,
			(unsigned char) blue);
	}

	return(0);
}

int stripes(FILE *outfile, int cols, int rows, int num_stripes, int reds[], int greens[], int blues[]){
	int stripe_width = rows/num_stripes;
	// A variable to calculate the color index based on row number
	int row_idx;
	
	// Print the header file which defines dimensions
	fprintf(outfile, "P6\n %d %d 255\n", cols, rows);
	
	for(int i = 0; i < rows; i++){
		// Number of rows/width gives the number of index color which is to be used 
		row_idx = i/stripe_width;
		for(int j = 0; j < cols; j++){
			if(row_idx != num_stripes){
				fprintf(outfile, "%c%c%c", (unsigned char) reds[row_idx], (unsigned char) greens[row_idx],
				(unsigned char) blues[row_idx]);
			}
			// For the last stripe, the index has to be decreased by 1
			else{
				fprintf(outfile, "%c%c%c", (unsigned char) reds[row_idx-1], (unsigned char) greens[row_idx-1],
				(unsigned char) blues[row_idx-1]);
			}
		}
	}
	
	return(0);
}


int vert_stripes(FILE *outfile, int cols, int rows, int num_stripes, int reds[], int greens[], int blues[]){
	int stripe_width = cols/num_stripes;	
	// A variable to calculate color index based on column number
	int col_idx;
	
	// Print the header file which defines dimensions
	fprintf(outfile, "P6\n %d %d 255\n", cols, rows);
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			col_idx = j/stripe_width;
			if(col_idx != num_stripes){
				fprintf(outfile, "%c%c%c", (unsigned char) reds[col_idx], (unsigned char) greens[col_idx],
				(unsigned char) blues[col_idx]);
			}
			else{
				fprintf(outfile, "%c%c%c", (unsigned char) reds[col_idx-1], (unsigned char) greens[col_idx-1],
				(unsigned char) blues[col_idx-1]);
			}
		}
	}

	return(0);
}


int four_square(FILE *outfile, int cols, int rows, int reds[], int greens[], int blues[]){
	int col_width = cols/2;
	int row_width = rows/2;
	// Defining the variables to calculate color indices based on row and column number
	int col_idx, row_idx;

	// Printing the header based on the specified dimensions
	fprintf(outfile, "P6\n %d %d 255\n", cols, rows);
	
	for(int i = 0; i < rows; i++){
		row_idx = i/row_width;
		for(int j = 0; j < cols; j++){
			col_idx = j/col_width;
			// For the first quadrant, use the color on the zero index
			if ((col_idx == 0) && row_idx == 0){
				fprintf(outfile, "%c%c%c", (unsigned char) reds[0], (unsigned char) greens[0],
			(unsigned char) blues[0]);
			}
			// For the second quadrant, use the color on the zero index
			else if ((col_idx >= 1) && row_idx == 0){
				fprintf(outfile, "%c%c%c", (unsigned char) reds[1], (unsigned char) greens[1],
			(unsigned char) blues[1]);
			}
			// For the third quadrant, use the color on the zero index
			else if ((col_idx == 0) && row_idx >= 1){
				fprintf(outfile, "%c%c%c", (unsigned char) reds[2], (unsigned char) greens[2],
			(unsigned char) blues[2]);
			}
			// For the four quadrant, use the color on the zero index
			else if ((col_idx >= 1) && row_idx >= 1){
				fprintf(outfile, "%c%c%c", (unsigned char) reds[3], (unsigned char) greens[3],
			(unsigned char) blues[3]);
			}
		}
	}

	return(0);
}

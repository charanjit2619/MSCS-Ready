/*
 * Your name
 * Project 2: Color Matcher
 * MSCS Ready, Module 1, Fall 2023
 * Date
 * Brief summary of program purpose
 */

#include <stdio.h>

/*
 * This program accepts a color definition from the user and then
 * returns the closest match from a predefined palette of colors.
 * We use a simple calculation of color distance, the Euclidean
 * distance between the colors (and acknowledge that this is not the best
 * fit for human perception).
 * That is, the distance between two colors is calculated as the square
 * root of the sum of the squares of the differences between the red,
 * green and blue values of the two colors.
 */

int main(){

	/*
	 * A palette of 8 colors is defined below.
	 * Each color has a name and appropriate R, G, and B values
	 */
	char black[20]="black"; 
	int black_R = 5; int black_G = 5; int black_B = 5;

	char white[20]="white"; 
	int white_R = 250; int white_G = 247; int white_B = 248;

	char red[20]="red"; 
	int red_R = 237; int red_G = 9; int red_B = 32; 

	char yellow[20]="yellow"; 
	int yellow_R = 233; int yellow_G = 237; int yellow_B = 9;

	char blue[20]="blue"; 
	int blue_R = 23; int blue_G = 91; int blue_B = 209;

	char orange[20]="orange"; 
	int orange_R = 247; int orange_G = 134; int orange_B = 5;

	char green[20]="green"; 
	int green_R = 59; int green_G = 171; int green_B = 7; 

	char purple[20]="purple"; 
	int purple_R = 135; int purple_G = 13; int purple_B = 217;

	/*
	 * TODO: create variables to keep track of
	 * the color that the user enters
	 */

	/*
	 * TODO: create variables to keep track of
	 * the closest match thus far in the palette of colors
	 */

	/*
	 * TODO: create variables to keep track of distance values:
	 * 1) distance from user's color to closest match thus far
	 * 2) distance from user's color to color currently being considered
	 * 3) any temporary variables you use in performing the distance calc
	 */

	/* 
	 * TODO:
	 * prompt user for color values for their color
	 * read values in
	 * input format should be (red_value, green_val, blue_val)
	 * echo values back out
	 */

	/* 
	 * TODO:
	 * distance between user's color and first color in palette.
	 * Report the distance.
	 * Set this color as the currently closest color.
	 * Report that this is currently the closest color.
	 * Output as seen in sample output file.
	 */

	/* 
	 * TODO:
	 * For each remaining color in the palette, compute and report the
	 * distance to the user's color.
	 * Check if it is closer than currently closest color.
	 * If so, make that color the closest color; report accordingly.
	 * Output as seen in sample output file.
	 */

	/* 
	 * TODO:
	 * Report the closest match found in the palette.
	 * Output as seen in sample output file.
	 */


	return(0);

}

/*
 * Charanjit Singh
 * Project 2: Color Matcher
 * MSCS Ready, Module 1, Fall 2023
 * Date: 9/13/2023
 * Code Summary:
 * This program takes a color input from the user in the form of (R,G,B) values and 
 * identifies the closest match from a pre-defined set of colors in a palette. It uses a straightforward method to measure 
 * color similarity, computing the Euclidean distance between colors, although this 
 * approach does not perfectly align with human perception. Specifically, the formula used is:
 * ((diff of red values)^2 + (diff of blue values)^2 + (diff of green values)^2)^0.5
 */

#include <stdio.h>
#include <math.h>
#include <string.h>

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
	 * Creating variables to keep track of
	 * the color that the user enters
	 */

	int r = 0, g = 0, b = 0;
	printf("Enter RGB values for your new color using the format (R,G,B): ");

	/*
	 * TODO: create variables to keep track of
	 * the closest match thus far in the palette of colors
	 */

	char closest_match[20];
	int r_closest= 0, g_closest = 0, b_closest = 0;

	/*
	 * TODO: create variables to keep track of distance values:
	 * 1) distance from user's color to closest match thus far
	 * 2) distance from user's color to color currently being considered
	 * 3) any temporary variables you use in performing the distance calc
	 */

	float min_distance = 0;
	float distance = 0;
	float red_sq = 0, green_sq = 0, blue_sq = 0;

	/* 
	 * TODO:
	 * prompt user for color values for their color
	 * read values in
	 * input format should be (red_value, green_val, blue_val)
	 * echo values back out
	 */

	scanf("(%d, %d, %d)", &r, &g, &b);

	/* 
	 * TODO:
	 * distance between user's color and first color in palette.
	 * Report the distance.
	 * Set this color as the currently closest color.
	 * Report that this is currently the closest color.
	 * Output as seen in sample output file.
	 */

	red_sq = pow(black_R - r, 2);
	green_sq = pow(black_G - g, 2);
	blue_sq = pow(black_B - b, 2);
	distance = sqrt(red_sq + green_sq + blue_sq);
	r_closest = black_R; 
	g_closest = black_G;
	b_closest = black_B;
	strcpy(closest_match, black);
	min_distance = distance;
	
	printf("Closest color is initially %s, with distance %5.2f. \n", closest_match, min_distance);

	/* 
	 * TODO:
	 * For each remaining color in the palette, compute and report the
	 * distance to the user's color.
	 * Check if it is closer than currently closest color.
	 * If so, make that color the closest color; report accordingly.
	 * Output as seen in sample output file.
	 */

	// Checking distance from White
	red_sq = pow(white_R - r, 2);
	green_sq = pow(white_G - g, 2);
	blue_sq = pow(white_B - b, 2);
	distance = sqrt(red_sq + green_sq + blue_sq);

	if (distance < min_distance){
		printf("Distance to white is %5.2f; closest color is now white. \n", distance);
		min_distance = distance;
		r_closest = white_R; 
		g_closest = white_G;
		b_closest = white_B;
		strcpy(closest_match, white);
	} else if (distance > min_distance) {
		printf("Distance to white is %5.2f; closest color is still %s. \n", distance, closest_match);
	}

	// Chekcing distnance from red
	red_sq = pow(red_R - r, 2);
	green_sq = pow(red_G - g, 2);
	blue_sq = pow(red_B - b, 2);
	distance = sqrt(red_sq + green_sq + blue_sq);

	if (distance < min_distance){
		printf("Distance to red is %5.2f; closest color is now red.\n", distance);
		min_distance = distance;
		r_closest = red_R; 
		g_closest = red_G;
		b_closest = red_B;
		strcpy(closest_match, red);
	} else if (distance > min_distance) {
		printf("Distance to red is %5.2f; closest color is still %s. \n", distance, closest_match);
	}

	// Checking distance from yellow
	red_sq = pow(yellow_R - r, 2);
	green_sq = pow(yellow_G - g, 2);
	blue_sq = pow(yellow_B - b, 2);
	distance = sqrt(red_sq + green_sq + blue_sq);

	if (distance < min_distance){
		printf("Distance to yellow is %5.2f; closest color is now yellow.\n", distance);
		min_distance = distance;
		r_closest = yellow_R; 
		g_closest = yellow_G;
		b_closest = yellow_B;
		strcpy(closest_match, yellow);;
	} else if (distance > min_distance){
		printf("Distance to yellow is %5.2f; closest color is still %s. \n", distance, closest_match);
	}

	// Checking ditance from blue
	red_sq = pow(blue_R - r, 2);
	green_sq = pow(blue_G - g, 2);
	blue_sq = pow(blue_B - b, 2);
	distance = sqrt(red_sq + green_sq + blue_sq);

 	if (distance < min_distance){
		printf("Distance to blue is %5.2f; closest color is now blue.\n", distance);
		min_distance = distance;
		r_closest = blue_R; 
		g_closest = blue_G;
		b_closest = blue_B;
		strcpy(closest_match, blue);;
	} else if (distance > min_distance){
		printf("Distance to blue is %5.2f; closest color is still %s. \n", distance, closest_match);
	}

	// Checking distance from orange
	red_sq = pow(orange_R - r, 2);
	green_sq = pow(orange_G - g, 2);
	blue_sq = pow(orange_B - b, 2);
	distance = sqrt(red_sq + green_sq + blue_sq);

 	if (distance < min_distance){
		printf("Distance to orange is %5.2f; closest color is now orange.\n", distance);
		min_distance = distance;
		r_closest = orange_R; 
		g_closest = orange_G;
		b_closest = orange_B;
		strcpy(closest_match, orange);;
	} else if (distance > min_distance){
		printf("Distance to orange is %5.2f; closest color is still %s. \n", distance, closest_match);
	}

	// Checking distance from green
	red_sq = pow(green_R - r, 2);
	green_sq = pow(green_G - g, 2);
	blue_sq = pow(green_B - b, 2);
	distance = sqrt(red_sq + green_sq + blue_sq);

 	if (distance < min_distance){;
		printf("Distance to green is %5.2f; closest color is now green.\n", distance);
		min_distance = distance;
		r_closest = green_R; 
		g_closest = green_G;
		b_closest = green_B;
		strcpy(closest_match, green);;
	} else if (distance > min_distance){
		printf("Distance to green is %5.2f; closest color is still %s. \n", distance, closest_match);
	}

	// Checking distance from purple
	red_sq = pow(purple_R - r, 2);
	green_sq = pow(purple_G - g, 2);
	blue_sq = pow(purple_B - b, 2);
	distance = sqrt(red_sq + green_sq + blue_sq);

 	if (distance < min_distance){
		printf("Distance to purple is %5.2f; closest color is now purple.\n", distance);
		min_distance = distance;
		r_closest = purple_R; 
		g_closest = purple_G;
		b_closest = purple_B;
		strcpy(closest_match, purple);;
	} else if (distance > min_distance){
		printf("Distance to purple is %5.2f; closest color is still %s. \n", distance, closest_match);
	}
	/* 
	 * TODO:
	 * Report the closest match found in the palette.
	 * Output as seen in sample output file.
	 */

	printf("The closest match found in the palette was: %s with (%d, %d, %d) \n\n", closest_match, r_closest, g_closest, b_closest);

	return(0);

}

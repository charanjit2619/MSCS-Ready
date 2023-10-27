#include "palette.h"

/*
 * get_palette reads n=size lines from the file named in palette_fname
 * for each color definition, it creates a color struct 
 * and places the colors in pal, an array of color structs
 */
int get_palette(char palette_fname[], struct color pal[], int size){

	FILE *fp;
	int counter = 0;
	char line[81];

	/* open palette file; report error and exit if unsuccessful */
	if ((fp = fopen(palette_fname, "r")) == NULL) {
        fprintf(stderr, "Error! opening file %s \n", palette_fname);
        // Program exits with error code = 1 if file pointer returns NULL.
        exit(1);
    }

	/* read a line at time from the file into a character array */
	while(fgets(line, sizeof(line), fp)) {
		// scanf reads from a string in the same way that scanf reads from stdin
		sscanf(line,"%c %d %d %d %s \n",&pal[counter].code, &pal[counter].red_val, 
				&pal[counter].green_val, &pal[counter].blue_val, pal[counter].name);
		
		counter++;
		};

	// close the file
	fclose(fp);

	return 0;
}

/*
 * show_palette iterates through the arr "pal"
 * displaying the member fields in the format
 * pal[i]: code red_val green_val blue_val color_name
 */
void show_palette(struct color pal[], int size){
	int i;

	for (i=0; i<size; i++){

      printf("pal[%d]:%c %d %d %d %s \n", i, pal[i].code, pal[i].red_val,
	  				pal[i].green_val, pal[i].blue_val, pal[i].name);
	}
	printf("\n");
}

/*
 * choose closest receive a palette array (pal) and size of palette, along
 * with a struct color orig_color
 * it traverses the pal array and returns a copy of the struct of the color 
 * in the that is closest to the original color
 */
struct color choose_closest(struct color pal[], int size, struct color orig_color){
	double distance, closest_distance;
	int red_dist, green_dist, blue_dist;

	// your implementation of choose_closest goes here
	// be sure to take advantage of the array of structures 

	// set closest as pal[0]
	// your multiple lines of code go here ...
	closest_distance = sqrt(pow((orig_color.red_val - pal[0].red_val), 2) + 
							pow((orig_color.green_val - pal[0].green_val), 2) + 
							pow((orig_color.blue_val - pal[0].blue_val), 2));
	red_dist = pal[0].red_val;
	green_dist = pal[0].green_val;
	blue_dist = pal[0].blue_val;

	// then iterate through the rest of the palette, updating as needed
	// your multiple lines of  code goes here ...
	for (int i = 1; i < size; i++) {
		distance = sqrt(pow((orig_color.red_val - pal[i].red_val), 2) + 
							pow((orig_color.green_val - pal[i].green_val), 2) + 
							pow((orig_color.blue_val - pal[i].blue_val), 2));
		if (distance < closest_distance) {
			closest_distance = distance;
			red_dist = pal[i].red_val;
			green_dist = pal[i].green_val;
			blue_dist = pal[i].blue_val;
		}
	}

	// return the structure with the color that is the closest
	// your line of code goes here ...
	struct color closest_color = {.red_val = red_dist, .green_val = green_dist, .blue_val = blue_dist};
	return closest_color;
}


void map_to_palette(char input_image_fname[80], char output_image_fname[80], 
						struct color palette[], int palette_size){

	FILE *infile;
	FILE *outfile;
	int color_depth, height, width;
	char filetype[3];
	char c;
	unsigned char red_char, green_char, blue_char;
	struct color temp2;

	/* open input file; report error and exit if unsuccessful */
	infile= fopen(input_image_fname, "r");
	if (!infile) {
         fprintf(stderr, "Unable to open file '%s' for reading \n", 
				input_image_fname);
         exit(1);
   }

	/* get image format; report error and exit if unsuccessful */
	if (!fgets(filetype, sizeof(filetype), infile)) {
  		perror(input_image_fname);
		exit(1);
	}

	/* check image format; report error and exit if unsuccessful */
	if (strcmp(filetype, "P6")){
		fprintf(stderr, "Invalid image format (must be 'P6')\n");
		exit(1);
	}

	/* ignore comments */
	c = getc(infile);	
	// for every comment line
	while (c == '#'){
		// throw away everything in the line
		while (getc(infile) != '\n');
		// check the next line
		c = getc(infile);	
	}

	/* put back that character that wasn't the start of a comment line */
	ungetc(c, infile);

	/* get dimensions; report error and exit if unsuccessful  */
	if (fscanf(infile, "%d %d", &width, &height)!=2){
		fprintf(stderr, "Invalid image size (error loading'%s' \n", 
			input_image_fname);
		exit(1);
	}

	/* get color depth ; report error and exit if unsuccessful */
	if (fscanf(infile, "%d\n", &color_depth)!=1){
		fprintf(stderr, "Invalid color depth (error loading'%s' \n", 
			input_image_fname);
		exit(1);
	}
	
	/* open output file */
	outfile= fopen(output_image_fname, "w");
	if (!outfile) {
         fprintf(stderr, "Unable to open file '%s' for writing\n", 
				output_image_fname);
         exit(1);
   }


	/* write image format, width, height and color dimension */
   fprintf(outfile, "P6\n %d %d 255\n", width, height);


	 // for every pixel in the input file 
	 for (int i= 0; i < height*width; i++){
		/* read the red, green and blue values 
	    * from the input image into unsigned char variables
		 * corresponding to the the three color components
		 */
      fscanf(infile,"%c%c%c",&red_char, &green_char, &blue_char);

		// We now have char values for the RGB components of the color
		// and we want to place the color values in a color struct variable
		// and pass that to choose_closest and recive an updated color struct
		// as a return value
		// BUT
		// our array of structures stores the RGB color components as integers
		// so we need to cast them as ints when assigning into the corresponding
		// members of the color structure

		struct color temp1 = {.red_val = (int)red_char, .green_val = (int)green_char, .blue_val = (int)blue_char};

		/* and then send that color struct to function (choose_closest) that chooses 
		 * the color from the palette that is the closest to 
		 * this color and returns a color struct containing that color
		 */

		temp2 = choose_closest(palette, palette_size, temp1);

		/*
		 * then we want to get the updated color values
		 * from the returned structure and place them in 
		 * an unsigned character variable.
		 * we need to cast the integer values to unsigned char
		 * as we make this assignement
		 */
		unsigned char red_char = temp2.red_val;
		unsigned char green_char = temp2.green_val;
		unsigned char blue_char = temp2.blue_val;


		/*
		 * write out a pixel to the new file that contains 
		 * the updated color for that pixel from the character
		 * variables you just updated
		 */
		fprintf(outfile, "%c%c%c", red_char, green_char, blue_char);
	 }
	fclose(outfile);

};


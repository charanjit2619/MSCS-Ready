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
        printf("Error! opening file %s \n", palette_fname);
        // Program exits with error code = 1 if file pointer returns NULL.
        exit(1);
    }

	/* read a line at time from the file into a character array */
	while(fgets(line, sizeof(line), fp)) {
		// scanf reads from a string in the same way that scanf reads from stdin
		sscanf(line,"%c %d %d %d %s \n", &pal[counter].code, &pal[counter].red_val, &pal[counter].blue_val, &pal[counter].green_val, pal[counter].name);
		counter += 1;
			// Step 5:your code goes here 
			// provide the list of 5 parameters to which
			// the values from the file should be assigned
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
    	printf("pal[%d]:%c %d %d %d %s \n", i, pal[i].code, pal[i].red_val, pal[i].blue_val, pal[i].green_val, pal[i].name);
			// Step 6: your code goes here 
			// provide the parameters that correspond to the
			// values in the printf string and produce the result seen in the 
			// sample output
	}
	// printf("\n");
}



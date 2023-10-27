#include <stdio.h>
#include "images.h"


int main(){
	FILE *file1, *file2, *file3, *file4;

	int red_col[10] = {0, 255, 255, 255, 255, 255,   0,   0,   0, 153};
	int green_col[10]  = {0, 255, 205,   0, 153, 255, 153, 153,   0,   0};
	int blue_col[10] = {0, 255, 255,   0,   0,   0,   0, 153, 255, 153};

	// test the blue rectangle function
	file1 = fopen("blue_rect.ppm","w");
	make_rect(file1, 200, 100, 0, 0, 255);
	fclose(file1);

	// test the stripes function
	file2 = fopen("stripes.ppm","w");
	stripes(file2, 400, 400, 6, red_col, green_col, blue_col);
	fclose(file2);

	// test the vert_stripes function
	file3 = fopen("vert_stripes.ppm","w");
	vert_stripes(file3, 400, 400, 6, red_col, green_col, blue_col);
	fclose(file3);

	// test the four square function
	file4 = fopen("four_square.ppm","w");
	four_square(file4, 400, 400, red_col, green_col, blue_col);
	fclose(file4);

	return 0;
	
}




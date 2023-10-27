/*
 * prompt.c
 * demonstrates interactive input
 * and use of a formatted scanf string
 * 09/23/2023
 * EK
 */

#include <stdio.h>

#define MAX_LEN	80

int main(){
	int lines;
	char display_string[MAX_LEN];

	printf("How many lines do you want to print? ");
	scanf("%d", &lines);

	// this format string with scanf will cause it to stop reading
	// once it reaches a tab or a newline
	printf("What should it say on each line? ");
	scanf(" %[^\t\n]",display_string);

	for (int i=0; i< lines; i++){
		printf("%s \n", display_string);
	}



}

/*
 * command2b.c
 * demonstrates typical style of input checking for command line args
 * and the use of atoi to convert from string to int
 * and the use of strncpy to copy a limited number of characters to a string
 * and with the error output (more properly) going to stderr rather than stdout
 * EK
 * 09/23/23
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN	80

int main(int argc, char *argv[]){
	int lines;
	char display_string[MAX_LEN];

	// check that the number of arguments is 3
	// display a usage statement if not
	// use the name of the program as entered by the user, in argv[0]
	if (argc != 3){
		fprintf(stderr,"Usage: %s num_lines display_string \n", argv[0]);
		exit(0);
	}

	// use the atoi function to convert num_lines argument from string to int
	// and make a local copy of the display_string argument
	// use strncpy to limit the number of characters accepted
	lines = atoi(argv[1]);
	strncpy(display_string, argv[2], 80);

	// and then display the string
	for (int i=0; i< lines; i++){
		printf("%s \n", display_string);
	}




}

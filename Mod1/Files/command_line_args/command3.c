/*
 * command3.c
 * demonstrates typical style of input checking for command line args
 * and shows alternative format of function prototype for main
 * EK
 * 09/23/23
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN	80

int main(int argc, char **argv){
//int main(int argc, char *argv[]){
	int lines;
	char display_string[MAX_LEN];

	if (argc != 3){
		printf("Usage: %s num_lines display_string \n", argv[0]);
		exit(0);
	}

	lines = atoi(argv[1]);
	strncpy(display_string, argv[2], 80);

	for (int i=0; i< lines; i++){
		printf("%s \n", display_string);
	}




}

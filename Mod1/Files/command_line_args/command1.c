/*
 * command1.c
 * demonstrates use of argc and argv
 * EK
 * 09/23/23
 */

#include <stdio.h>

#define MAX_LEN	80

int main(int argc, char *argv[]){

	printf("You entered %d arguments\n", argc);

	for (int i=0; i<argc; i++){
		printf("%d:	%s \n", i, argv[i]);
	}

}

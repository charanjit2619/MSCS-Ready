/*
 * times_table.c
 * displays a 12 x 12 multiplication table
 * Charanjit Singh, Ravindu Tharanga Perera, Kalyani Vidudala
 * 9/28/23
 */

#include <stdio.h>

int main(){

	int i, j;

	// display the header info 	
	printf("         ");
	for (i =1; i<=12; i++)
		printf("%4d ", i);
	printf("\n");

	for (i =1; i<=72; i++)
		printf("-");
	printf("\n");
	
    for (i =1; i<=12; i++){
        printf("\n %4d   |", i);
        for(j= 1; j <= 12; j++){
            printf("%4d ", j*i);
        }
    }

	return (0);
}

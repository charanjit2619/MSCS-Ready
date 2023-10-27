/*
 * ascii.c
 * displays a 12 x 12 multiplication table
 * Charanjit Singh, Ravindu Tharanga Perera, Kalyani Vidudala
 * 9/28/23
 */

#include <stdio.h>

void main(){
    int i;

    for (i = 0; i <= 127; i++){
        printf("%d: %c\n", i, i);
    }
    printf("\n\n\n");
}


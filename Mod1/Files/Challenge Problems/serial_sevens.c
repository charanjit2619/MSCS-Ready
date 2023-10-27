/*
 * ascii.c
 * counting down from 100 by sevens
 * Charanjit Singh, Ravindu Tharanga Perera, Kalyani Vidudala
 * 9/28/23
 */


#include <stdio.h>

int main(){
    int i = 100;
    int t = 0;

    for(i = 100; i > 0; i-=7){
        if(t%5 != 0){
            printf("%d\t", i);
        }
        else{
            printf("\n%d\t", i);
        }
        t++;
    }

    return(0);
}

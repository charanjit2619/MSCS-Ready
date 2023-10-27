/*
 * Charanjit Singh
 * Username: charans
 * CPSC 6810 MSCS Ready, Module 1, Fall 2023
 * Date: 9/23/2023
 * Project 3: Dichotomous Key: Tree Identification
 * Code Summary:
 * An interactive code which helps in identifying 
 * broadleaf trees with alternating leaves in Georgia based on 
 * further characteristics as selected by users.
 */


#include <stdio.h>
#include <string.h>

int main(){
    // Defining a varibale to store input value 
    char ans;

    printf("Assume we are trying to identify a tree found in Georgia, based\non characteristics of the leaves. We already know that it is a\nbroadleaf tree with leaves that are alternating\n\n");

    printf("Answer the questions below to determine the type of tree.\n");
    printf("Are the leaves:\n");
    printf("a) lobed?\nb) not lobed?\n");
    scanf("%c", &ans);

    if (strcmp(&ans,"a") == 0){
        printf("Are the leaves:\n");
        printf("a) rounded?\nb) pointed?\n");

        scanf(" %c", &ans);

        if (strcmp(&ans,"a") == 0){
            printf("It is a SASSAFRAS tree.\n");            
        }
        else {
            printf("It is a TULIP-POPLAR tree.\n");
        }

    }
    else {
	    printf("Are the leaves:\n");
        printf("a) smooth?\nb) jagged?\n");

        scanf(" %c", &ans);

        if (strcmp(&ans,"a") == 0){
            printf("Are the leaves:\na) heart-shaped?\nb) oval?\n");   
            scanf(" %c", &ans);
            if (strcmp(&ans,"a") == 0){
                printf("It is an EASTERN REDBUD tree.\n");        
            }
            else {
                printf("It is a MAGNOLIA tree.\n");
            }
        }
        else {
            printf("Are the leaves:\na) dark green, leathery, with spines?\nb) yellow green or green, and not leathery with spines?\n");   
            scanf(" %c", &ans);
            if (strcmp(&ans,"a") == 0){
                printf("It is an AMERICAN HOLLY tree\n");        
            }
            else {
                printf("It is an AMERICAN BEECH tree\n");
            }
        }
    }
    
    return(0);
}


/*
 * matrix_add.c
 * This program computes the sum of two square matrices
 * Charanjit Singh, Ravindu Tharanga Perera, Kalyani Vidudala
 * 9/28/23
 */

#include <stdio.h>

int main() {
	int array1[50][50],array2[50][50],array3[50][50];
	int row,col,size;
  
	printf("\n\nAdd two square matrices of the same size :\n");
	printf("------------------------------\n");  
	printf("Input the size of the square matrix (1-50): ");
	scanf("%d", &size); 
	while ((size > 50) || (size < 1)){
		printf("Input the size of the square matrix (1-50): ");
		scanf("%d", &size); 
	}

    /* Store values into the first matrix */
	printf("Input elements into the first matrix :\n");
	for( row = 0; row < size; row++) {
		for( col = 0; col < size; col++) {
			printf("element - [%d],[%d] : ", row, col);
			scanf("%d",&array1[row][col]);
		}
	}   
 
    /* Store values into the second matrix */
	printf("Input elements into the second matrix :\n");
	for( row = 0; row < size; row++) {
		for( col = 0; col < size; col++) {
			printf("element - [%d],[%d] : ", row, col);
			scanf("%d",&array2[row][col]);
		}
	}   
 
	/* Display values of the first matrix */
	printf("\nThe first matrix is :\n");
	for( row = 0; row < size; row++) {
      printf("\n");
      for( col = 0; col < size; col++){
           printf("%d\t",array1[row][col]);
		}
	}

	/* Display values of the second matrix */
	printf("\n\nThe second matrix is :\n");
	for( row = 0; row < size; row++) {
      printf("\n");
      for( col = 0; col < size; col++){
           printf("%d\t",array2[row][col]);
		}
	}

  
	/* calculate the sum of the matrices */   

	for( row = 0; row < size; row++) {
		for( col = 0; col < size; col++) {
			array3[row][col] = array2[row][col] + array1[row][col];
		}
	}

	/* display the sum of the matrices */   
   printf("\n\nThe sum of the two matrices is : \n");
	for( row = 0; row < size; row++) {
      printf("\n");
      for( col = 0; col < size; col++){
           printf("%d\t",array3[row][col]);
		}
	}
   printf("\n\n");
}

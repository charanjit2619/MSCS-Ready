/*
 * matrix_mult_exercise.c
 * Eileen Kraemer
 * 09/28/2023
 * multiply two square matrices of the same dimension
 * Charanjit Singh, Ravindu Tharanga Perera, Kalyani Vidudala
 */


#include <stdio.h>

int main() {
	int array1[50][50],array2[50][50],array3[50][50];
	int row,col;
	int size;
	int product=0;
	int k;
  
	printf("\n\nMultiplication of two square matrices "
		"of the same dimension :\n");
	printf("-------------------------------------------------------------\n");  
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

	/* calculate the product of the matrices */   
	for (row = 0; row < size; row++) {
			for (col = 0; col < size; col++) {
				array3[row][col] = 0;
				for (k = 0; k < size; k++) {
					array3[row][col] += array1[row][k] * array2[k][col];
				}
			}
		}

	/* display the sum of the matrices */   
   printf("\n\nThe product of the two matrices is : \n");
	for( row = 0; row < size; row++) {
      printf("\n");
      for( col = 0; col < size; col++){
           printf("%d\t",array3[row][col]);
		}
	}
   printf("\n\n");
}


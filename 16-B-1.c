//Print Transpose of a matrix.
#include<stdio.h>
void main(){
	int rows,cols;
	printf("Enter the number rows = \n");
	scanf("%d",&rows);
	printf("Enter the number columns = \n");
	scanf("%d",&cols);
	int matrix[rows][cols];
	int i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("Enter the number in matrix[%d][%d] \n ",i,j);
			scanf("%d",&matrix[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d    ",matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Your transpose matrix is = \n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d    ",matrix[j][i]);
		}
		printf("\n");
	}
}

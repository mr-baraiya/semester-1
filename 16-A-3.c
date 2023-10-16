//Read and store the roll no and marks of 20 students using 2D array.
#include<stdio.h>
void main(){
	int m,n,i,j;
	printf("Enter the number of student - ");
	scanf("%d",&m);
	printf("Enter the number of entity - ");
	scanf("%d",&n);
	int matrix[m][n];
	for(i=0;i<m;i++){
		printf("Enter roll number and  marks = ");
		for(j=0;j<n;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d   ",matrix[i][j]);
		}
		printf("\n");
    }
} 

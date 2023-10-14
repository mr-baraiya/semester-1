//Read values in two-dimensional array and print them in matrix form.
#include<stdio.h>
void main(){
	int m,n,i,j;
	printf("Enter the number of raws in matrix - ");
	scanf("%d",&m);
	printf("Enter the number of colamn in matrix - ");
	scanf("%d",&n);
	int matrix[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter value in %d th raw %d th column = ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%3d",matrix[i][j]);
		}
		printf("\n");
	}
}

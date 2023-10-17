//Perform Multiplication of two matrices.
#include<stdio.h>
void main(){
	int n,i,j,k;
	printf("Enter the number rows and columns  = \n");
	scanf("%d",&n);
	int a[n][n],b[n][n],ans[n][n];
	
	printf("Enter the first matrix => \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Enter the number in matrix[%d][%d] \n ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter the sacond matrix => \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Enter the number in matrix[%d][%d] \n ",i,j);
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	// c[i][j] += a[i][k] * b[k][j];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			ans[n][n]=0;
			for(k=0;k<n;k++){
				ans[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	printf("Multiplication matrix is => \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",ans[i][j]);
		}
		printf("\n");
	}
}

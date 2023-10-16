//Count number of positive, negative and zero elements from 3 X 3 matrix.
#include<stdio.h>
void main(){
	int m,n,i,j,pos=0,neg=0,zero=0;
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
			if(matrix[i][j]>0)
			pos++;
			else if(matrix[i][j]<0)
			neg++;
			else
			zero++;
	    }
	}
	printf("total positive number in matrix is = %d\n",pos);
	printf("total negative number in matrix is = %d\n",neg);
	printf("total zero number in matrix is = %d",zero);
}

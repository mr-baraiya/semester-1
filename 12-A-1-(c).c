//5
//54
//543
//5432
//54321
#include<stdio.h>
void main(){
	int i,j,n;
	printf("enter the number :-");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(j=n;j>=i;j--){
			printf("%d",j);
		}
		printf("\n");
	}
}

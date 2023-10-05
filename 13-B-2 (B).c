//
//1
//0 1
//0 1 0
//1 0 1 0
//1 0 1 0 1
#include<stdio.h>
void main(){
	int i,j,n,k=1;
	printf("enter the number =");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(k%2==0)
			printf("%d",0);
			else
			printf("%d",1);
			k++;
		}
		printf("\n");
	}
}

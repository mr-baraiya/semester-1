#include<stdio.h>

void main(){
	int n,i=1;
	printf("enter the value of n :");
	scanf("%d",&n);
	do{
		printf("%d ",i);
		i++;
	}
	while(i<=n);
}

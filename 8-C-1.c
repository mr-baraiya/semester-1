#include<stdio.h>

void main(){
	int n,i=1;
	printf("enter the value of n:");
	scanf("%d",&n);
	while(i<=n){
		printf("%d = %d \n ",i,i*i);
		i++;
	}
}

#include<stdio.h>

void main(){
	int n,i=1;
	printf("enter the value of n :");
	scanf("%d",&n);
	printf(" odd number series is given bellow : \n");
	while(i<=n){
		if(i%2!=0)
		printf("%d ",i);
		i++;
	}
}

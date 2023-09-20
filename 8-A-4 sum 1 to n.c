#include<stdio.h>

void main(){
	int i=1,n,sum=0;
	printf("enter the number n :");
	scanf("%d",&n);
	while(i<=n){
	sum=sum+i;
	i++;
	}
	printf("your summation is =%d",sum);
}

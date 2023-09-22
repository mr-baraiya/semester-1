//Print multiplication table of a given number.
#include<stdio.h>

void main(){
	int n,i=1;
	printf("enter the number :-");
	scanf("%d",&n);
	while(i<=10){
		printf(" %d * %d = %d \n",n,i,n*i);
		i++;
	}
}

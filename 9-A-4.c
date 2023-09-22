//Find factorial of the given number.
#include<stdio.h>

void main(){
	int mul=1,n,i=1;
	printf("enter the number :- ");
	scanf("%d",&n);
	while(i<=n){
		mul=mul*i;
		i++;
	}
	printf("value of %d factorial is = %d",n,mul);
}

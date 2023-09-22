//Calculate x^y without using power function.

#include<stdio.h>

void main(){
	int x,y,i=2,mul;
	printf("(x rust to y)\n");
	printf("enter the value of x :-");
	scanf("%d",&x);
	printf("enter the value of y :-");
	scanf("%d",&y);
	mul=x;
	while(i<=y){
		mul=mul*x;
		i++;
	}
	printf("%d rust to %d = %d",x,y,mul);
}

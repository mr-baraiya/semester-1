#include<stdio.h>

void main(){
	float p,t,r,i;
	printf("enter value of amount =");
	scanf("%f",&p);
	printf("enter value of time period = ");
	scanf("%f",&t);
	printf("enter value of interest rate =");
	scanf("%f",&r);
	i=p*r*t/100.0;
	printf("your interest is = %f",i);
	
}

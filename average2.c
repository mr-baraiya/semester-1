#include<stdio.h>

void main(){
	float a,b,c,temp;
	//a=12,b=13,c=14;
	printf("enter value of a =");
	scanf("%f",&a);
	printf("enter value of b=");
	scanf("%f",&b);
	printf("enter value of c=");
	scanf("%f",&c);
	temp=(a+b+c)/3.0;
	printf("average value of three numbers=%f",temp);
}

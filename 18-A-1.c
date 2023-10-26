//Add two numbers using function.
#include<stdio.h>
float add(float,float);

void main(){
	float a,b;
	printf("enter the first number :-");
	scanf("%f",&a);
	printf("enter the sacond number :-");
	scanf("%f",&b);
	float sum=add(a,b);
	printf("sum is = %f",sum);
}
float add(float x,float y){
	float sum=x+y;
	return sum;
}

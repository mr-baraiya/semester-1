//Return the maximum of three floating-point numbers.
#include<stdio.h>
float max(float,float,float);
void main(){
	float a,b,c;
	printf("enter the first number :-");
	scanf("%f",&a);
	printf("enter the sacond number :-");
	scanf("%f",&b);
	printf("enter the third number :-");
	scanf("%f",&c);
	float res=max(a,b,c);
	printf("Maximum number out of given three numbers = %f",res);
}
float max(float x,float y,float z){
	float res=0;
	if(x>y){
		if(x>z)
		res=x;
		else
		res=z;
	}
	else{
		if(y>z)
		res=y;
		else
		res=z;
	}
	return res;
}

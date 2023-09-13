#include<stdio.h>
#include<math.h>

void main(){
	int a,b,c;
	float d,x1,x2;
	printf("ax^2+bx+c \n ");
	printf("enter the value of a:-");
	scanf("%d",&a);
	printf("enter the value of b:-");
	scanf("%d",&b);
	printf("enter the value of c:-");
	scanf("%d",&c);
	d=(b*b)-4*a*c;
	if(d>=0){
		x1=((-b)+sqrt(d))/(2.0*a);
	    x2=((-b)-sqrt(d))/(2.0*a);
	    printf("first root is %f \n and second root is %f",x1,x2);
	}
	else{
		printf("wrong input");
	}
}

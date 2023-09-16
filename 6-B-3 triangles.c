#include<stdio.h>

void main(){
	float a,b,c;
	printf("enter the lenght of a=");
	scanf("%f",&a);
	printf("enter the lenght of b=");
	scanf("%f",&b);
	printf("enter the lenght of c=");
	scanf("%f",&c);
	if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
		printf("\nright angle triangle");
	}
	if(a==b && a==c && b==c){
		printf("\nequalateral triangle");
	}
	if(a==b || a==b || b==c){
	printf("\nisosceles triangle");
	}
	if(a!=b && a!=c && b!=c){
		printf("\nscalene triangle");
    }
}

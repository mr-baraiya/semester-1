#include<stdio.h>

void main(){
	float a,b,c;
	printf("enter value of a : ");
	scanf("%f",&a);
	printf("enter value of b : ");
	scanf("%f",&b);
	printf("enter value of c : ");
	scanf("%f",&c);
	if(a>b){
		if(a>c){
			printf("%f is largest",a);
		}
		else{
			printf("%f is largest",c);
		}
	}
	else{
		if(b>c){
			printf("%f is largest",b);
		}
		else {
			printf("%f is largest",c);
		}
	}
}

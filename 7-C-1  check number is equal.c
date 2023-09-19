#include<stdio.h>

void main(){
	int a,b;
	printf("enter the first number :");
	scanf("%d",&a);
	printf("enter the second number :");
	scanf("%d",&b);
	if( a^b == 0){
		printf("these number is equal");
	}
	else{
		printf("these number is different");
	}
}

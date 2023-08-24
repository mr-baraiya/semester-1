#include<stdio.h>

void main(){
	int a,b,temp;
	printf("enter value of a :");
	scanf("%d",&a);
	printf("enter value of b : ");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("after swaiping value of a = %d and value of b =%d",a,b);
}

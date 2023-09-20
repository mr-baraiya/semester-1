#include<stdio.h>

void main(){
	int a,b;
	printf("enter the first number :");
	scanf("%d",&a);
	printf("enter the sacond number :");
	scanf("%d",&b);
	while(a<b || b<a){
		if (a%2==0){
			printf("%d ",a);
		}
		a++;
	}
}

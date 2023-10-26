//Find maximum and minimum between two numbers using function.
#include<stdio.h>
void max(int,int);
void main(){
	int a,b;
	printf("enter the first number :-");
	scanf("%d",&a);
	printf("enter the sacond number :-");
	scanf("%d",&b);
	max(a,b);
}
void max(int x,int y){
	if(x>y){
		printf("%d is max and %d is min.",x,y);
	}
	if(x<y){
		printf("%d is max and %d is min.",y,x);
	}
}

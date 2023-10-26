//Swap two numbers using call by reference.
#include<stdio.h>
void swap(int *,int *);
void main(){
	int a,b;
	printf("Enter the first number = ");
	scanf("%d",&a);
	printf("Enetr the sacond number = ");
	scanf("%d",&b);
	printf("befoer : %d   %d\n",a,b);
	swap(&a,&b);
	printf("after : %d   %d",a,b);
}
void swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}

#include<stdio.h>
void swap1(int,int);
void swap2(int*,int*);
void main(){
	int a,b;
	printf("Enter the first number = ");
	scanf("%d",&a);
	printf("Enetr the sacond number = ");
	scanf("%d",&b);
	printf("swaiping using call by value :-\n");
	printf("befoer : %d   %d\n",a,b);
	swap1(a,b);
	printf("swaiping using call by reference :-\n");
	printf("befoer : %d   %d\n",a,b);
	swap2(&a,&b);
	printf("after : %d   %d",a,b);
}
void swap1(int x,int y){
	int temp=x;
	x=y;
	y=temp;
	printf("after : %d   %d\n",x,y);
}
void swap2(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}

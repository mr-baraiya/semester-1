//Print value and address of a variable.
#include<stdio.h>
void main(){
	int a;
	printf("Enter the value of a = ");
	scanf("%d",&a);
	printf("the value is %d and adress = ",a);
	printf("%d",&a);
}

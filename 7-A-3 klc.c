#include<stdio.h>

void main(){
	char temp;
	int a,b;
	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
	printf(" enter the maths operation :-");
	scanf(" %c",&temp);
	switch(temp){
		case '+': printf("%d plus %d is = %d ",a,b,a+b);
		break;
		case '-': printf("%d minase %d is = %d",a,b,a-b);
		break;
		case '*': printf("%d miltiply with %d is = %d",a,b,a*b);
		break;
		case '/': printf("%d divide by %d is = %d",a,b,a/b);
		break;
		default:printf (" wrong input \n please put right input ");
	   }
	}

#include<stdio.h>
void main(){
	char a="vishal", *ptr1;
	int b= 10 , *ptr2;
	float c=3.6789 , *ptr3;
	double d=234.098 , *ptr4;
	ptr1=&a;
	ptr2=&b;
	ptr3=&c;
	ptr4=&d;
	
	printf("%s \n",ptr1);
	printf("%d \n",*ptr2);
	printf("%f \n",*ptr3);
	printf("%lf \n",*ptr4);
}

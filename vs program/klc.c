#include<stdio.h>

void main(){
	int a,b,c;
	char temp;
	printf(" enter the operater :- ");
	scanf("%c",&temp);
	printf("enter the value of a and b :- ");
	scanf("%d %d",&a,&b);
	if (temp == '+'){
		c=a+b;
	}
	if(temp == '-'){
		c=a-b;
	}
	if(temp == '*'){
		c=a*b;
	}
	if(temp == '/'){
		c=a/b;
	}
	
	printf("ans :- %d",c);
}

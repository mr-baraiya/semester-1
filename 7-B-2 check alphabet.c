#include<stdio.h>

void main(){
	char a;
	printf("enter the character=");
	scanf("%c",&a);
	((a>=65 && a<=90) || (a>=97 && a<=122))?printf("character is alphabet"):printf("character is not alphabet");
	
}

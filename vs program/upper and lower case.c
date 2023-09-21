#include<stdio.h>

void main(){
	char a;
	printf("enter the charactar :");
	scanf("%c",&a);
	if(a >='A' && a <='Z')
	{
		printf("upper case ");
	}
	else if (a >='a' && a<='z'){
		printf("lower case");
	}
	else if(a<=57 && a>=48){
		printf("digit");
	}
	else{
		printf("special charatar");
	}
}

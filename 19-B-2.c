//Scan a character string passed as an argument and convert all lowercase string to uppercase string.
#include<stdio.h>
void main(){
	char str[100];
	printf("Enter the string :-");
	gets(str);
	int i;
	for( i=0;str[i]!='\0';i++){
		if(str[i]>96){
			str[i]=str[i]-32;
		}
	}
	printf("%s",str);
}

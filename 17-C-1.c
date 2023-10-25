//1. Find length of string using pointers.
#include<stdio.h>
void main(){
	char string[100];
	int i,count=0,*ptr;
	printf("enter the string :-");
	gets(string);
	for(i=0;string[i]!='\0';i++){
		count++;	
	}
	ptr=&count;
	printf("Length of string is = %d",*ptr);
}

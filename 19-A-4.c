//find a character from given string.
#include<stdio.h>
void main(){
	char a,str[100];
	int i;
	printf("Enetr the string :-");
	gets(str);
	printf("Enetr the character :- ");
	scanf("%c",&a);
	for(i=0;str[i]!='\0';i++){
		if(a==str[i]){
		    printf("This Character present in Str[%d].\n",i);
	    }
	}
}

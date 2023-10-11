//Input a string in character array and print string and length of string.
#include<stdio.h>

void main(){
	char a[1000];
	int i,length=0;
	printf("Enter the string = ");
	scanf("%[^\n]s",a);
	//gets(a)=>scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++){
		length++;
	}
	printf("Length of array = %d\n",length);
	printf("%s",a);
	//printf("\a");
}

//Use string handling functions strlen(), strcmp(), strcpy(), strcat(), strrev(), strlwr() and strupr().
#include<stdio.h>
#include<string.h>
void main(){
	char s1[100]="hello world";
	char s2[100]="hello";
	printf("length of s1 = %d and length of s2 = %d \n",strlen(s1),strlen(s2));
	printf("%d\n",strncmp(s1,s2,5));
	printf("%s\n",strcat(s1,s2));
	printf("%s\n",strcpy(s1,s2));
	char s3[100]="hello world";
	char s4[100]="hello";
	printf("%s \n",strupr(s3));
	printf("%s \n",strlwr(s3));
	printf("%s %s\n",strrev(s3),strrev(s4));
}

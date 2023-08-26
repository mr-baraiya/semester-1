#include<stdio.h>

void main(){
	char A;
	printf("enter character :-");
	scanf("%c",&A);
	if( A=='a' || A=='e' || A=='i' || A=='o' || A=='u'){
		printf("%c is vowel",A);
	}
	else{
		printf("%c is consonant",A);
	}
}

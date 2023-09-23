//Print all uppercase and lowercase alphabets.
#include<stdio.h>

void main(){
	char alphabet=65;
	printf("all uppercase alphabet :-");
	while(alphabet<=90){
		printf("%c ",alphabet);
		alphabet++;
    }
    printf("\n");
    alphabet=97;
    printf("all lowercase alphabet :-");
    while(alphabet<=122){
    	printf("%c ",alphabet);
    	alphabet++;
	}
}

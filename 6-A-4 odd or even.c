#include<stdio.h>

void main(){
	int a;
	printf(" enter the number :");
	scanf("%d",&a);
	if((a%10)%2==0){
		printf("even");
	}
	else{
		printf("odd");
	}
}

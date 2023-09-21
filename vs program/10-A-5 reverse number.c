#include<stdio.h>

void main(){
	int n,r,count=0;
	printf("enter the number :-");
	scanf("%d",&n);
	printf("reverse number is = ");
	while(n>0){
		r=n%10;
		n=n/10; 
		printf("%3d",r);
	}
}

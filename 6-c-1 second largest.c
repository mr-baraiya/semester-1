#include<stdio.h>

void main(){
	int a,b,c;
	printf("enter the first numbar a:-");
	scanf("%d",&a);
	printf("enter the second numbar b:-");
	scanf("%d",&b);
	printf("enter the first numbar c:-");
	scanf("%d",&c);
	if(a>b){
		if(b>c){
			printf("%d is second largest",b);
		}
		else{
			printf("%d is second largrst",c);
		}
	}
	else{
		if(a>c){
			printf("%d is second largrst",a);
		}
		else{
			printf("%d is second largest",c);
		}
	}
}

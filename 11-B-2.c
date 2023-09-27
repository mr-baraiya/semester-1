//. Count frequency of digits in an integer.
#include<stdio.h>

void main(){
	int n,i,d,count=0;
	printf("enter the number :-");
	scanf("%d",&n);
	printf("\nwhat digit you count ?=");
	scanf("%d",&d);
	for(i=1;n>0;i++){
	    if(n%10==d){
	       count=count+1;	
		}
		n=n/10;
		}
		printf("%d",count);
	}

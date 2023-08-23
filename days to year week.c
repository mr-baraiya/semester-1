#include<stdio.h>

void main(){
	int d,w,y;
	printf("enter number of days = ");
	scanf("%d",&d);
    y=d/365;
    d=d%365;
    w=d/7;
    d=d%7;
	printf("answer is %d year:: %d week:: %d days",y,w,d);
}

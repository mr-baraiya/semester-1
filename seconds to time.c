#include<stdio.h>

void main(){
	int h,m,s;
	printf("enter time in seconds = ");
	scanf("%d",&s);
	h=s/3600;
	s=s%3600;
	m=s/60;
	s=s%60;
	printf("time is %d :: %d :: %d",h,m,s);
}

//. Find power of any number using recursion.
#include<stdio.h>
int power(int,int);
void main(){
	int x,y,ans=0;
	printf("(x)^y\n");
	printf("Enter the value of x:-");
	scanf("%d",&x);
	printf("Enter the value of y:-");
	scanf("%d",&y);
	ans=power(x,y);
	printf("answer it is = %d",ans);
}
int power(int a,int b){
	if(b==1)
	return a;
	else 
	return a*power(a,b-1);
}

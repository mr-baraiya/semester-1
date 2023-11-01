//Find factorial of a number using function and recursive function.
#include<stdio.h>
int fact(int);
void main(){
	int n;
	printf("Enter the number :-");
	scanf("%d",&n);
	int res = fact(n);
	printf("factorial of %d is = %d",n,res);
}
int fact(int n){
	if(n==1)
	return 1;
	else
	return n*fact(n-1);
}

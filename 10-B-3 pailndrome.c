//Check whether the given number is palindrome or not.
#include<stdio.h>

void main(){
	int n,r,a,sum=0;
	printf("enter the number :-");
	scanf("%d",&n);
	a=n;
	while(n>0){
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(sum==a)
	printf("Given number (%d) is palindrome.",a);
	else
	printf("Given number (%d) is not palindrome.",a);
}

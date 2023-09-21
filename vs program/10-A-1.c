//find out sum of first and last digit of a given number
#include<stdio.h>

void main(){
	int l,f,sum=0,n;
	printf("enter the value of n :");
	scanf("%d",&n);
	l= n%10;
	f=n;
	while(f>=10){
		f=f/10;
	}
	sum=l+f;
	printf("The sum is = %d",sum);
}

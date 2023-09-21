//Find whether the given number is prime or not using flag.
#include<stdio.h>

void main(){
	int n,flag=0,i=2;
	printf("enter the number :-");
	scanf("%d",&n);
	while(i<=n/2)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0)
	printf("Given number (%d) is prime number.",n);
	else
	printf("Given number (%d) is not prime number.",n);
}

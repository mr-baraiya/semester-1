//Find all prime numbers between given interval using functions.

#include<stdio.h>
void prime(int n,int a,int b){
	int i,flag=0;
	for(i=a;i<=b;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("%d is a not prime number.\n",n);
	else
	printf("%d is a prime number.\n",n);
}
void main(){
	int n,a,b;
	printf("enetr the number :-");
	scanf("%d",&n);
	printf("Enter the range between find the number is prime or not.");
	scanf("%d %d",&a,&b);
	prime(n,a,b);
}

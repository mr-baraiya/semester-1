//Print given number in reverse order.
#include<stdio.h>

void main(){
	int n,r,sum=0;
	printf("enter the number :-");
	scanf("%d",&n);
	while(n>0){
		r=n%10;
		n=n/10;
		sum=sum*10+r;
	}
	printf("reverse number is = %d",sum);
}

//. Print sum of series 1 – 2 + 3 – 4 + 5 – 6 + 7 … n.
#include<stdio.h>

void main(){
	int i=1,n,sum=0;
	printf("value of n :-");
	scanf("%d",&n);
	while(i<=n){
		if(i%2==0)
		sum=sum-i;
		else
		sum=sum+i;
		i++;
	}
	printf("sum of n(%d) terms :- %d",n,sum);
}

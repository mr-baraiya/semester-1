#include<stdio.h>

void main(){
	int n,i=1,a=3,sum=1;
	printf("how many terms do you have? :");
	scanf("%d",&n);
	while(i<=n){
		printf("%d \n",sum);
		sum=sum+a;
		a=a+2;
		i++;
	}
}

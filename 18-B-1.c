//Generate Fibonacci series of N given number using function name fibbo().
#include<stdio.h>
void fibbo(int);
void main(){
	int n;
	printf("Enter the number of terms in fibonacci series :-");
	scanf("%d",&n);
	fibbo(n);
}
void fibbo(int n){
	int i,a=0,b=1,sum=1;
	for(i=0;i<n;i++){
		if(i==0)
		printf("0 \n");
		else if(i==1)
		printf("1 \n");
		else{
			sum=a+b;
			a=b;
			b=sum;
			printf("%d \n",sum);
		}
	}
}

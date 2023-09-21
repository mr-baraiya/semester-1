#include<stdio.h>

void main(){
	int n,count=0,i=1;
	printf(" enter the number :- ");
	scanf("%d",&n);
	while(i<=n){
	if(n%i==0){
		count=count+1;
	}
	i++;
    }
    if(count==2)
    printf("given number (%d) is prime number",n);
    else
    printf("given number (%d) is not prime number",n);
}


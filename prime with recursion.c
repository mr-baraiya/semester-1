#include<stdio.h>
int prime(int,int);
void main(){
	int n,i=1;
	printf("Enter the number = ");
	scanf("%d",&n);
	int res = prime(n,i);
	if(res==0)
	printf("%d not a prime number.",n);
	else if (res==1)
	printf("%d a prime number.",n);
}
int prime ( int n,int i){
	i++;
	if(n%i==0){
		if(i<n)
		return 0;
		else
		return 1;
	}
	else{
		return prime(n,i);
	}
}


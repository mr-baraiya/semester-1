#include<stdio.h>
void main(){
	int i,n,flag=0;
	printf("Enter the number = ");
	scanf("%d",&n);
	for(i=2;i<n/2;i++){
		if(n%i==0){
			flag=1;
		}
	}
	if(flag==1){
		printf("Given number = %d is not a prime number.",n);
	}
	else{
		printf("Given number = %d is a prime number.",n);
	}
}

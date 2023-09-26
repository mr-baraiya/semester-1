//Find factorial of the given number.

#include<stdio.h>
void main(){
	int i,n,mul=1;
	printf("enter the number =");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		mul=mul*i;
	} 
	printf("%d factorial value is = %d",n,mul);
}

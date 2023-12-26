#include<stdio.h>
#include<math.h>
int fun(int);

void main(){
	int n;
	printf("Enter the number = ");
	scanf("%d",&n);
	
	int res=fun(n);
	//printf("%d \n",res);
	if(res==n)
	printf("%d is a Palindrome.",n);
	else
	printf("%d is Not a Palindrome.",n);
}
int fun(int n){
	int i,temp=n;
	for(i=0;temp != 0;i++){
		temp = temp/10;
	}
	i=i-1;
	if(n==0){
		return 0;
	}
	else{
		return pow(10,i)*(n%10)+fun(n/10);
	}
}

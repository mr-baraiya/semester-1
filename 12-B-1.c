#include<stdio.h>
void main(){
	int n,sum=0,temp=0,i,j;
	printf("enter the number :-");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			sum=sum+j;
		}
		temp=temp+sum;
	}
	printf("%d",sum);
}

//Check whether the given number is perfect or not.
//example:- 6,496 etc.
#include<stdio.h>

void main(){
	int n,i=1,sum=0;
	printf("enter the number :-");
	scanf("%d",&n);
	while(i<n){
		if(n%i==0){
			printf("%d+\n",i);
			sum=sum+i;
		}
		i++;
	}
	if(sum==n)
	printf("This number (%d) is perfect.",n);
	else
	printf("this number (%d) is not perfect.",n);
}

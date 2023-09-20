#include<stdio.h>

void main(){
	int n,i=1,count1=0,count2=0;
	while(i<=10){
		printf("enter the number :");
		scanf("%d",&n);
		if(n%2==0){
			count1=count1+1;
		}
		else if (n%2!=0){
			count2=count2+1;
		}
		else {
		printf("wrong input");
	}
	i++;
	}
	printf("count of even number = %d\n",count1);
	printf("count of odd number = %d",count2);
}


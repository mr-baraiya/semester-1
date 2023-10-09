//Count number of positive or negative number from an array of n numbers.
#include<stdio.h>

void main(){
	int n,count=0;
	printf("enter the size of array =");
	scanf("%d",&n);
	int i,arr[n];
	for(i=0;i<n;i++){
		printf("Enter the number in arr[%d] =",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]>=0)
		count=count+1;
	}
	printf(" Number of positive numbers = %d \n",count);
	printf(" Number of negative numbers = %d",n-count);
}

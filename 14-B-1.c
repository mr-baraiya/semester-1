//Count numbers higher than the average of an array.
#include<stdio.h>
void main(){
	int n,i,sum=0,count=0,avg;
	printf("Enter the size of array =");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter the number in arr[%d] =",i);
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	avg=sum/n;
	for(i=1;i<n;i++){
		if(arr[i]>avg){
			count++;
		}
	}
	printf(" numbers higher than the average is = %d",count);
}

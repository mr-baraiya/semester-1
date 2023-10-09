//Find Max, Min, Sum, Avg. of given numbers from an array.
#include<stdio.h>

void main(){
	int n,i;
	float max,min,sum=0,avg;
	printf("enter the size of array =");
	scanf("%d",&n);
	float arr[n];
	for(i=0;i<n;i++){
		printf("Enter the number in arr[%d] =",i);
		scanf("%f",&arr[i]);
	    sum=sum+arr[i];
	    max=arr[0];
	    min=arr[0];
	    if(arr[i]>max)
		max=arr[i];
		else if (arr[i]<min)
		min=arr[i];
	}
	avg=sum/n;
	printf("total sum = %f \n",sum);
	printf(" avg = %f \n",avg);
	printf(" Largest number in array = %f \n",max);
	printf(" Smallest number in array = %f",min);
}

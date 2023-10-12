//. Reverse elements of an array without using second array.
#include<stdio.h>

void main(){
	int n;
	printf("Enter the size of array :-");
	scanf("%d",&n);
	int arr[n];
	int i,j,temp=0;
	for(i=0;i<n;i++){
		printf("enter the number in arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n/2;i++){
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
}

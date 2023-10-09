//Read n numbers from user and print in normal and reverse order.
#include<stdio.h>

void main(){
	int n;
	printf("Enter the size of array :-");
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++){
		printf("enter the number in arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	for(i=(n-1);i>=0;i--){
		printf("%d \n",arr[i]);
	}
}

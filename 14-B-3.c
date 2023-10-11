// Sort elements of an array in an ascending order.
#include<stdio.h>
void main(){
	int n,i,j, temp = 0;
	printf("Enter the size  of array :-");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter the  number in arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				}
			
		}
	}
	for(i=0;i<n;i++){
		printf("%d \n",arr[i]);
	}
}

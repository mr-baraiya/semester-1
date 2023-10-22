//Store n elements in an array and print the elements using pointer.
#include<stdio.h>
void main(){
	int n;
	printf("Enter the  size of array :-");
	scanf("%d",&n);
	int arr[n],*ptr[n];
	int i;
	for(i=0;i<n;i++){
		printf("Enter the value in arr[%d] = ", i);
		scanf("%d",&arr[i]);
		printf("\n");
		ptr[i]=&arr[i];
	}
	
	for(i=0;i<n;i++){
		printf("%d \n ",*ptr[i]);
	}
}

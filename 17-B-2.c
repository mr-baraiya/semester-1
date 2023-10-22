//Swap two arrays using pointers.
#include<stdio.h>
void main(){
	int n;
	printf("Enter the  size of array :-");
	scanf("%d",&n);
	int i,arr1[n],arr2[n],temp[n],*ptr1[n],*ptr2[n];
	printf("Enter the value in first array = \n");
	for(i=0;i<n;i++){
		printf("Enter the value in arr[%d] = ", i);
		scanf("%d",&arr1[i]);
		printf("\n");
		ptr1[i]=&arr1[i];
	}
	printf("Enter the value in sacond array = \n");
	for(i=0;i<n;i++){
		printf("Enter the value in arr[%d] = ", i);
		scanf("%d",&arr2[i]);
		printf("\n");
		ptr2[i]=&arr2[i];
	}
	for(i=0;i<n;i++){
		temp[i]=ptr1[i];
		ptr1[i]=ptr2[i];
		ptr2[i]=temp[i];
	}
	printf("value of first array = \n");
	for(i=0;i<n;i++){
		printf("%d \n",*ptr1[i]);
	}
	printf("value of sacond array = \n");
	for(i=0;i<n;i++){
		printf("%d \n",*ptr2[i]);
	}
}

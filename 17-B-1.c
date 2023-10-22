//Copy one array to another using pointers.
#include<stdio.h>
void main(){
	int n;
	printf("Enter the  size of array :-");
	scanf("%d",&n);
	int arr1[n],arr2[n],*ptr[n];
	int i;
	for(i=0;i<n;i++){
		printf("Enter the value in arr[%d] = ", i);
		scanf("%d",&arr1[i]);
		printf("\n");
		ptr[i]=&arr1[i];
	}
	
	for(i=0;i<n;i++){
		arr2[i]=*ptr[i];
		printf("%d \n ",arr2[i]);
	}
}

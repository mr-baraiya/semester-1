//Count total duplicate elements in an array.
#include<stdio.h>

void main(){
	int n;
	printf("Enter the size of array :-");
	scanf("%d",&n);
	int arr[n];
	int i,j,count=0;
	for(i=0;i<n;i++){
		printf("enter the number in arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
			count++;
			break;
		    }
		}
	}
	printf("Total duplicate numbers in array is= %d",count);
}

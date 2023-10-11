//Count total number of negative elements in array.
#include<stdio.h>
void main(){
	int n,i,count=0;
	printf("Enter the size  of array :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter the  number in array a[%d]=",i);
		scanf("%d",&a[i]);
		if(a[i]<0)
		count++;
    }
    printf("\nTotal negative number in array = %d",count);
}

//Copy all elements of one array to another.
#include<stdio.h>
void main(){
	int n,i;
	printf("Enter the size  of array :-");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++){
		printf("Enter the  number in array a[%d]=",i);
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0;i<n;i++){
		printf("%d ",b[i]);
	}
}

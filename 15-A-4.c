//15-A-4
//Search element in array.
#include<stdio.h>
void main(){
	int n,i,b;
	printf("Enter the size  of array :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter the  number in array a[%d]=",i);
		scanf("%d",&a[i]);
    }
    printf("enter the elemant =  \n ");
    scanf("%d",&b);
    for(i=0;i<n;i++){
    if(a[i]==b){
			printf("%d elemant is in a[%d]",b,i);
	    }
	}
}

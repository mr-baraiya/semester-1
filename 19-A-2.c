//Pass an array in function to print array elements.
#include<stdio.h>
void print(int,int []);
void main(){
	int n;
	printf("Enter the size of array :-");
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++){
		printf("Enetr the value in a[%d] :-",i);
		scanf("%d",&a[i]);
	}
	print(n,a);
}
void print(int n,int a[]){
	int i;
	for(i=0;i<n;i++){
		printf("\n %d",a[i]);
	}
}

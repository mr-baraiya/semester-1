//Read five person height and weight and count the number of person having height greater than 170 and 
//weight less than 50.
#include<stdio.h>
void main(){
	int n,i,a=0,b=0;
	printf("Enter the number of person =");
	scanf("%d",&n);
	int height[n] , weight[n];
    for(i=0;i<n;i++){
    	printf("enter the height of person %d =",i+1);
    	scanf("%d",&height[i]);
    	printf("Enter the weight of person %d =",i+1);
    	scanf("%d",&weight[i]);
    	printf("\n");
	}
	for(i=0;i<n;i++){
		if(height[i]>170)
		a++;
		if(weight[i]<50)
		b++;
	}
	printf("number of persons which height greater then 170 = %d \n",a);
	printf("Number of persons which weight less then 50 = %d",b);
}


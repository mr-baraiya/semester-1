#include<stdio.h>

void main(){
	int n,a,i=1,sum=0;
	float avg;
	printf("how many numbers do you have enter ? :-");
	scanf("%d",&a);
	while(i<=a){
		printf(" enter the number :-\n");
		scanf("%d",&n);
		sum=n+sum;
		i++;
	}
	avg=sum/(float)a;
	printf("sum of all number :- %d\n",sum);
	printf("avg of all numbers :- %f",avg);
}

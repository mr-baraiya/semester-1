#include<stdio.h>

void main(){
	int i;
	float count=1,sum=1;
	for(i=1;i<=1000;i++){
       count=count/(float)i;
	   sum=sum+(float)count;
    } 
    printf("e=%.7f\n",sum);
}

//Calculate ???? without using power function and without using multiplication. 
#include<stdio.h>
void main(){
	int i,j,x,y,a,sum=0;
	printf("find x to the power y it's = ?\n");
	printf("enter the value of x :-");
	scanf("%d",&x);
	printf("enter the value of y :-");
	scanf("%d",&y);
	a=x;
    for(i=1;i<=y;i++){
	     for(j=1;j<a;j++){
		 sum=sum+x;
	    }
	x=sum;
    }
	printf("%d",sum);
}

//Calculate x^y without using power function. 
#include<stdio.h>
void main(){
	int x,y,i,ans=1;
	printf("x rust to y");
	printf("\nenter the velue of x and y \n");
	scanf("%d %d",&x,&y);
	for(i=1;i<=y;i++){
		ans=ans*x;
	}
	printf("your answer is = %d",ans);
}

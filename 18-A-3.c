//Count simple interest using function.
#include<stdio.h>
void interest(int,int,int);
void main(){
	int r,p,t;
	printf("Enetr the total amount = ");
	scanf("%d",&p);
	printf("Enter the rate of interest = ");
	scanf("%d",&r);
	printf("Enetr the time period =");
	scanf("%d",&t);
	interest(r,p,t);
}
void interest(int r,int p,int t){
	float i=(r*p*t)/100.0;
	printf("Interest of your total amount = %f",i);
}

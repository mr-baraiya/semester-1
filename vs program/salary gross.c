#include<stdio.h>

void main(){
	int salary;
	float hra,gross,da;
	printf("enter the salary:-");
	scanf("%d",&salary);
	if(salary>=10000 && salary<20000){
		hra=salary*(0.2);
		da=salary*(0.8);
	}
	else if (salary>=20000 && salary<30000){
		hra=salary*(0.25);
		da=salary*(0.9);
	}
	else if (salary>=30000){
		hra=salary*(0.3);
		da=salary*(0.95);
     }
     else{
     	printf("invalid number");
     	
	 }
	 gross=salary+da+hra;
	 printf("salary gross is :- %f",gross);
}

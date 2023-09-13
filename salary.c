#include<stdio.h>

int main(){
	float salary,HRA,DA,Gs;
	printf("Enter basic salary :");
	scanf("%f",&salary);
	if(salary>=10000&&salary<20000){
		Gs = salary + 0.2*(salary) + 0.8*(salary);
		printf("Gross salary is : %f",Gs);
	}
	else if(salary>=20000&&salary<30000){
	Gs = salary + 0.25*(salary) + 0.9*(salary);
		printf("Gross salary is : %f",Gs);		
	}
	else if(salary>=30000){
	Gs = salary + 0.3*(salary) + 0.95*(salary);
		printf("Gross salary is : %f",Gs);	
	}
}

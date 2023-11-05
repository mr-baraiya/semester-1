// Create, declare and initialize structure employee.
#include<stdio.h>
#include<string.h>
struct employee{
	char name[100];
	int salary;
}; 
void main(){
	struct employee y;
	char str[100];
	int n;
	printf("Enter the name of employee = ");
	gets(str);
	strcpy(y.name,str);
	printf("Enter the salary of employee = ");
	scanf("%d",&y.salary);
	printf("\n\nEmployee name = %s \n",y.name);
	printf("Salary of employee = %d",y.salary);
}

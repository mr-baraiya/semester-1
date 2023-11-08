//Demonstrate structure pointer.
#include<stdio.h>
#include<string.h>
struct std{
	char name[30];
	int  roll;
	float pr;
};
void main(){
	char str[30];
	struct std a,*ptr;
	ptr=&a;
	printf("Enter the name of student = ");
	gets(str);
	strcpy(ptr->name,str);
	printf("Enter the roll number of student = ");
	scanf("%d",&ptr->roll);
	printf("Enter the percantage of student = ");
	scanf("%f",&ptr->pr);
	printf("%s == %d == %f ",ptr->name,ptr->roll,ptr->pr);
}

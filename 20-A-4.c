// Create structure student with name, percentage and age.
// Read data of 5 students using array of structure.
#include<stdio.h>
#include<string.h>
struct student{
	char name[30];
	int age;
	float per;
};
void main(){
	char str[30];
	struct student arr[5];
	int i;
	for(i=0;i<5;i++){
		printf("Enter the name of student :-");
		//scanf("%[^\n]s",&arr[i].name);
		if(i!=0)
		gets(str);
		gets(str);
		strcpy(arr[i].name,str);
		printf("Enter the Percantage of the student :-");
		scanf("%f",&arr[i].per);
		printf("Enter the age of student :-");
		scanf("%d",&arr[i].age);
		str[30]="\0";
	}
	for(i=0;i<5;i++){
		printf("\n name of student = %s \n",arr[i].name);
		
		printf("Percantage of student = %f \n",arr[i].per);
		
		printf("age of student =%d",arr[i].age);
	}
}

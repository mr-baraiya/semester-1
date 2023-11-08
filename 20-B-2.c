// Demonstrate nested structure.
#include<stdio.h>
#include<string.h>
struct time{
	int yy;
	int mm;
	int dd;
};
struct std{
	char name[30];
	struct time dob;
};
void main(){
	char str[30];
	struct std a;
	printf("enter the name of student :- ");
	gets(str);
	strcpy(a.name,str);
	printf("Enter birth date = (dd : mm : yy) \n");
	scanf("%d %d %d",&a.dob.dd,&a.dob.mm,&a.dob.yy);
	printf("Name : %s \n Date of Birth : %d-%d-%d ",a.name,a.dob.dd,a.dob.mm,a.dob.yy)  ;
}

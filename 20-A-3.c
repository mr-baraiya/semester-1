//Demonstrate difference between structure and union.
#include<stdio.h>
struct std{
	char name[10];
	int marks;
	float pr;
};
union stu{
	char name[10];
	int marks;
	float pr;
};
void main(){
	struct std a;
	union stu b;
	printf("size of struct = %d \n",sizeof(a));
	printf("size of union = %d ",sizeof(b));
}

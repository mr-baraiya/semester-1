#include<stdio.h>

void main(){
	int day;
	printf("enter month number(1-12)\n");
	scanf("%d",&day);
	switch(day){
		case 1:
		case 3: 
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: printf(" number of days = 31");
		break;
		case 4:
		case 6:
		case 9:
		case 11: printf("number of days = 30");
		break;
		case 2: printf ("number of days =28 and \n number of days = 29 (if leap year)");
		break;
		default:printf("wrong input");
		break;
	}
}

#include<stdio.h>
#include<time.h>
 void main(){
 	time_t t;
 	time(&t);
 	printf("Current date/time = %s", ctime(&t));
 	getch();
 }

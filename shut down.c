#include<stdio.h>
#include<stdlib.h>

void main(){
	char temp;
	printf("do you want to shutdown your pc(y / n ) :-");
	scanf("%c",&temp);
	// s for shut down this pc
	// r for restart
	// i for shut down other pc
	if ( temp == 'y'){
		system("c:\\windows\\system32\\shutdown /r");
	}
}

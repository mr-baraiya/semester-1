#include<stdio.h>

void main(){
	int n;
	//printf(" 0=sunday \n 1=monday \n 2=tuesday \n 3=wendesday \n 4=thurseday \n 5=friday \n 6=satureday \n");
	printf(" enter the number between 0 to 6 \n");
	scanf("%d",&n);
	switch(n){
	case 0 : printf("sunday");
	break;
	case 1 : printf("monday");
	break;
	case 2 : printf("tuesday");
	break;
	case 3 : printf("wendesday");
	break;
	case 4 : printf("thursday");
	break;
	case 5 : printf("friday");
	break;
	case 6 : printf("satureday");
	break;
	default : printf("wrong input");
	break;
   }
}

#include<stdio.h>
//#include<stdio.h>
//strncpy(a,b,n);
void main(){
	char a[100],b[100];
	int n,i,la=0,lb=0;
	printf("Enter the first string :-");
	gets(a);
	printf("Enter the sacond string :-");
	gets(b);
	printf("Enter the number where have copy:-");
	scanf("%d",&n);
	
	for(i=0;a[i]!='\0';i++){
		la++;
	}
	for(i=0;b[i]!='\0';i++){
		lb++;
	}
	for(i=0;i<la || i<lb;i++){
		if(n<lb){
		     if(i<n)
		     a[i]=b[i];
	    }
	    else
	    if(i<lb)
	    a[i]=b[i];
	    
    }
	a[i]='\0';
	printf("%s",a);
}

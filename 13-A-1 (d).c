#include<stdio.h>
void main(){
	int n,i,j,a;
	printf(" Enter the number =");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		a=1;
		for(j=1;j<=2*i-1;j++){
			 if(j%2!=0){
			 printf("%d",a);
			 a++;
		    }
			else
			printf(" ");
		}
		printf("\n");
    }
}

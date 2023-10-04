#include<stdio.h>
void main(){
	int i,j,n,a;
	printf(" enter the number :-");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a=1;
		for(j=n;j>=i;j--){
			printf("%d",a);
			a++;
		}
		printf("\n");
	}
}

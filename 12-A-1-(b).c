//1
//12
//123
//1234
//12345
#include<stdio.h>
void main(){
	int i,j,n;
	printf("enter the number :-");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%3d",j);
		}
		printf("\n");
	}
}

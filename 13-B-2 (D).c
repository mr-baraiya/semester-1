/*(d)
    1
   A B
  1 2 3
 C D E F
1 2 3 4 5*/

#include<stdio.h>
void main(){
	int n,i,j;
	printf(" Enter the number =");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		int b=1;
		int a=65;
		for(j=1;j<=2*i-1;j++){
			if(j%2!=0){
				if(i%2==0)
				printf("%c",a++);
				else
				printf("%d",b++);
			}
			else
			printf(" ");
		}
		printf("\n");
    }
}

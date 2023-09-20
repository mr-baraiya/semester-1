#include<stdio.h>
#include<math.h>

void main(){
	float n,i=0;
	while(i<=9){
		printf("%f = ",i);
		n=sqrt(i);
		printf("%f\n",n);
		i++;
	}
}

//Check whether a number is prime, Armstrong or perfect number using functions. (create custom library)
#include<stdio.h>
#include <math.h>
void prime(int a){
	int i,flag=0;
	for(i=2;i<=a/2;i++){
		if(a%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("%d is a not prime number .\n",a);
	else
	printf("%d is a prime number .\n",a);
}

void armstrong(int n) {
    int a,r,i=0;
    float result = 0.0;
    a = n;

    // Calculate the number of digits in the number
    while (a != 0) {
        a = a/10;
        ++i;
    }

    a = n;

    // Check if it's an Armstrong number
    while (a != 0) {
        r = a % 10;
        result =result + pow(r, i);
        a /= 10;
    }

    if ((int)result == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

}

void perfect(int n){
	int i=1,sum=0;
	
	while(i<n){
		if(n%i==0){
			sum=sum+i;
		}
		i++;
	}
	if(sum == n)
	printf("%d is a perfect number .\n",n);
	else
	printf("%d is not a perfect number .\n",n);
}


//Find reverse of any number using recursion.
#include<stdio.h>
#include<math.h>
int reverse(int);
void main(){
	int num;
	printf("Enter the number :-");
	scanf("%d",&num);
	int ans=reverse(num);
	printf("%d reverse of this number = %d",num,ans);
}
int reverse(int a){
	//5768
	//8*
	int i;
	int n=a;
	for(i=0;n!=0;i++){
		n=n/10;
	}
	if(a==0){
		return 0;
	}
	else{
		return (a%10)*pow(10,i-1)+reverse(a/10);
	}
}

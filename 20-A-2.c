//Create a structure book with book title, author, publication, and price. Read data of 3 books and display.
#include<stdio.h>
#include<string.h>
struct book{
	char title[100];
	char author[100];
	char pub[100];
	float price;
};
void main(){
	char a[100],b[100],c[100];
	struct book x,y,z;
	printf("\n\n");
	
	printf("Enetr the name of book :-");
	gets(a);
	strcpy(x.title,a);
	printf("Enetr the name of author :-");
	gets(a);
	strcpy(x.author,a);
	printf("Enetr the name of publication :-");
	gets(a);
	strcpy(x.pub,a);
	printf("Enter the price of book :-");
	scanf("%f",&x.price);
	printf("\n");
	
	printf("Enetr the name of book :-");
	gets(b);
	strcpy(y.title,b);
	printf("Enetr the name of author :-");
	gets(b);
	strcpy(y.author,b);
	printf("Enetr the name of publication :-");
	gets(b);
	strcpy(y.pub,b);
	printf("Enter the price of book :-");
	scanf("%f",&y.price);
	printf("\n");
	
	printf("Enetr the name of book :-");
	gets(c);
	strcpy(z.title,c);
	printf("Enetr the name of author :-");
	gets(c);
	strcpy(z.author,c);
	printf("Enetr the name of publication :-");
	gets(c);
	strcpy(z.pub,c);
	printf("Enter the price of book :-");
	scanf("%f",&z.price);
	printf("\n");
	
	printf("book name = %s \n Author name = %s \n Publication name = %s \n Amount of the book = %f \n",x.title,x.author,x.pub,x.price);
	printf("\n");
	printf("book name = %s \n Author name = %s \n Publication name = %s \n Amount of the book = %f \n",y.title,y.author,y.pub,y.price);
	printf("\n");
	printf("book name = %s \n Author name = %s \n Publication name = %s \n Amount of the book = %f \n",z.title,z.author,z.pub,z.price);
	printf("\n");
	 
	}

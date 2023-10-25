//17-B-3 Add two matrix using pointers.
#include<stdio.h>
void main(){
	int i,j,a1[3][3],a2[3][3],*p1[3][3],*p2[3][3];
	printf("enter the elemant of first matrix = \n ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a1[i][j]);
			p1[i][j]=&a1[i][j];
		}
	}
	printf("enter the elemant of Sacond matrix = \n ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a2[i][j]);
			p2[i][j]=&a2[i][j];
		}
	}
	printf("\n\n First matrix is given below = \n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d  ",*p1[i][j]);
		}
		printf("\n");
	}
	printf("\n\n sacond matrix is given below = \n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d  ",*p2[i][j]);
		}
		printf("\n");
	}
	printf("\n\n sum of given teo matrices is given below = \n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d  ",*p1[i][j]+*p2[i][j]);
		}
		printf("\n");
	}
}

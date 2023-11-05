//Swap elements of two integer arrays using user define function.
void swap(int,int [],int []);
void main(){
	int n;
	printf("Enter the size of array :-");
	scanf("%d",&n);
	int i,a1[n],a2[n];
	
	printf("Enter the first array :-\n");
	
	for(i=0;i<n;i++){
		printf("Enter the value in a1[%d] =",i);
		scanf("%d",&a1[i]);
	}
	printf("\nEnter the sacond array :-\n");
	for(i=0;i<n;i++){
		printf("Enter the value in a2[%d] =",i);
		scanf("%d",&a2[i]);
	}
	swap(n,a1,a2);
}
void swap(int n,int a[n],int b[n]){
	int i,temp=0;
	for(i=0;i<n;i++){
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
	printf("\n first array is = \n");
	for(i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
	printf("\n sacond array is = \n");
	for(i=0;i<n;i++){
	    printf("%d  ",b[i]);	
	}
}

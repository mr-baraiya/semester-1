//Sort array using pointers.
#include <stdio.h>

void main() {
    int i,j,n;
    printf("Enter the size of array :-");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
    	printf("Enter the number in arr[%d] = ",i);
    	scanf("%d",&arr[i]);
	}

    printf("Original array: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int temp, *ptr1, *ptr2;

    for ( i = 0; i < n - 1; i++) {
        for ( j = 0; j < n - i - 1; j++) {
            ptr1 = arr + j;
            ptr2 = arr + j + 1;

            if (*ptr1 > *ptr2) {
                // Swap the elements using pointers
                temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;
            }
        }
    }

    printf("\nSorted array: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}


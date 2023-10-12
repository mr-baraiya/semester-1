//Find missing numbers of sequence using array.(in a sequence 1,2,4,5,7,8,10, Missing numbers are 3,6,9).
#include <stdio.h>
void main() 
{
    int n,i,j;
    printf("Enter value of n : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %d number : ",i);
        scanf("%d",&arr[i]);
    }
    
    printf("Missing numbers: ");
    
    for (i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]-arr[i]!=1)
            {
                printf(" %d , ",arr[i]+1);
            }
            break;
            
        }
    }
}

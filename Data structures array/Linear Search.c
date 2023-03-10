#include <stdio.h>
#define n  5
int main()
{
    int arr[n],flag=0, size=0, i,num_search;
    printf("Plz Enter Array Size:");
    scanf("%d",&size);
    
    printf("Array is:\n");
    for (int k=0;k<size;k++)
    {
        scanf("%d",&arr[k]);
    }
    
    printf("Plz Enter Number for search:");
    scanf("%d",&num_search);
    
    for (i=0;i<size;i++)
    {
        if(arr[i]==num_search)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
            printf("Number search in index= %d",i);
    }
    else
    {
        printf("Number not found");
    }
    
}
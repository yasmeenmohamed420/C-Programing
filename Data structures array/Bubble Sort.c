#include <stdio.h>
#define n  5
int main()
{
    int arr[n],temp=0, size=0;
    printf("Plz Enter Array Size:");
    scanf("%d",&size);
    
    printf("Array Before Bubble Sort:\n");
    for (int k=0;k<size;k++)
    {
        scanf("%d",&arr[k]);
    }
    
    for (int i=0;i<size;i++)
    {
        for (int j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    printf("Array After Bubble Sort:\n");
    for (int k=0;k<size;k++)
    {
        printf("%d\n",arr[k]);
    }
}
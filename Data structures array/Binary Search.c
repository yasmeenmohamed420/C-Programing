#include <stdio.h>
#define size  5
int main()
{
    int arr[size],found=0,flag=0,Arr_Size=0 ,num,start=0,end=size-1,mid;
    printf("Plz Enter Array Size:");
    scanf("%d",&Arr_Size);
    
    printf("Array is:\n");
    for (int k=0;k<Arr_Size;k++)
    {
        scanf("%d",&arr[k]);
    }
    
    printf("Plz Enter Number for search:");
    scanf("%d",&num);
    
    while(end>=start)
    { 
        mid=(start+end)/2;
         
        if (num==arr[mid])
        {
            flag=1;
            found=mid;
            printf("Number found in index= %d",found);
            break;
        }
        else if (num>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    if(flag==0)
    {
        printf("Number not found");
    }
}
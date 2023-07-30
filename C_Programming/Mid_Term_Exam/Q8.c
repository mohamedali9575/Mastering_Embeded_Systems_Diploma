#include<stdio.h>
#define size 5
void Reverse_arr(int arr[])
{
    int i;
    for(i=0;i!=size/2;i++)
    {
        arr[size-1-i]=arr[i]+arr[size-1-i];
        arr[i] = arr[size-1-i]-arr[i];
        arr[size-1-i] = arr[size-1-i]-arr[i];
    }

}
void main()
{
    int a[size]={1,2,3,4,5};
    int i;
    Reverse_arr(a);
    printf("array reversed: ");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }

}
#include<stdio.h>


int count_ones(int num)
{
    int count=0;
    while(num)
    {
        num =(num&((unsigned)num>>1));
        count++;
    }
    return count;
}

void main()
{
    int num;
    printf("Enter number; ");
    scanf("%d",&num);
    printf("max numbers of ones is: %d",count_ones(num));

}
#include<stdio.h>

#define size 7
int find_uniqe(int arr[]);

void main(){
    int arr[size]={4,2,4,2,2,7,4}; 
    printf("Uniqe Number is: %d",find_uniqe(arr));
}

int find_uniqe(int arr[])
{
    int i, unique = arr[0];
    for(i=0;i<size;i++){
        unique ^= arr[i];
    }
    
    return unique;
}

#include<stdio.h>


int counter_of_ons(int);


void main(){
    int num;
    printf("Enter Your num: ");
    scanf("%d",&num);

    printf("number of ones in %d is: %d",num,counter_of_ons(num));
}

int counter_of_ons(int num)
{
    static int counter = 0;
    if(num!=0){
        counter += (num%2? 1:0);
        counter_of_ons(num/2);
    }
    return counter;
}

#include<stdio.h>


int sum_100();

void main(){
    printf("Sum from 1 to 100 without loop is: %d",sum_100());
}
int sum_100(){
    static int sum=0 ,counter=0;
    if(counter<100){
    counter+=1;
    sum+=counter;
    sum_100();
    }
    return sum;
}
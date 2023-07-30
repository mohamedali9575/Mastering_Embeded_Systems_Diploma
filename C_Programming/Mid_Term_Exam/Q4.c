#include<stdio.h>


int reverser(int);

void main(){
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);
    printf("REversed: ");
    reverser(num);

}


int reverser(int num){

    if(num!=0){
        printf("%d",num % 10);
        reverser(num/10);
    }
    return 0;
}
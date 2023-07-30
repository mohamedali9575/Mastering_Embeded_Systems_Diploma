#include <stdio.h>


int sum_of_dgits(int numbers);

void main(){
    int num;
    printf("input: ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&num);
    printf("%d",sum_of_dgits(num));

}
int sum_of_dgits(int numbers){
    static int sum = 0;
    if(numbers!=0){
        sum +=(numbers%10);
        sum_of_dgits(numbers/10); 
    }
    return sum;
}

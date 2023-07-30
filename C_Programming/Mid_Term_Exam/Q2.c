#include<stdio.h>
#include<math.h>

float squre_root(float num);
void main(){
    float num;
    printf("Enter a positive number: ");
    fflush(stdout);  fflush(stdin);
    scanf("%f",&num);
    printf("Squre root of %.2f is: %.2f",num,squre_root(num));

}
float squre_root(float num){
     if (num <= 0) {
        return 0; // Square root of a non-positive number is not defined
    }
    
    float squareRoot = exp(0.5 * log(num));
    return squareRoot;
}
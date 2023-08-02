#include<stdio.h>


#define pi 3.14
#define Area_Cir(Red) ((double)Red*Red*pi)


void main()
{
    float red;
    printf("Enter redias of the circle: ");
    scanf("%f",&red);
    printf("Area is: %.2f",Area_Cir(red)); 
    
}



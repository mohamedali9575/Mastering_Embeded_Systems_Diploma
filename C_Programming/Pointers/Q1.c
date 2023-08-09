#include<stdio.h>


void main()
{
    int m =29;

    printf("\n\nAddres of m : 0X%p\n",&m);
    printf("Value of m : %d\n\n\n",m);

    int *ab = &m;
    ab = &m;

    printf("Now ab is assigned with the addres of m\n");
    printf("Addres of ad : 0X%x\n",ab);
    printf("Contentof pointer ab : %d\n\n\n\n",*ab);

    m = 34;
    printf("The value of m assigned to 34 now.\n");
    printf("Address of pointer ab : 0X%x\n",ab);
    printf("Content of Pointer ab : %d\n\n\n\n",*ab);

    *ab = 7;
    printf("The pointer variable ab is assigned with the value 7 now.\n");
    printf("Address of m : 0X%x\n",ab);
    printf("Value m : %d",*ab);

}
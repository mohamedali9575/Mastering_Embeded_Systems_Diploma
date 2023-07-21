#include <stdio.h>

void main()
{
	float red;
	char choice;
	printf ("Enter circle Radius :");
	fflush (stdin); fflush(stdout);
	scanf("%f",&red);
	fflush (stdin); fflush(stdout);
	printf ("Enter Your Choice : ");
	fflush (stdin); fflush(stdout);
    scanf("%c",&choice);
    if (choice== 'a')
    	printf("Area is : %2.2f",3.14*red*red);
    else if (choice== 'c')
    	printf("Circumference is : %2.2f",3.14*2*red);
    else
    	printf("Error !");


}
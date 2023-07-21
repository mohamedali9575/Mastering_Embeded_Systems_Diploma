///*
// * EX6.c
// *
// *  Created on:
// *      Author: Shams
// */
//
//// Write Source Code to Swap Two Numbers
//
#include<stdio.h>

void main()
{
	float a,b;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);
	a += b;
	b = a-b;
	a = a-b;
	printf("After swapping, value of a = %.1f \n",a);
	printf("After swapping, value of b = %.1f",b);


}

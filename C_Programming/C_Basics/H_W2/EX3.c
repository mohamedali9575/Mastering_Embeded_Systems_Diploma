/*
 * EX3.c
 *
 *  Created on: 
 *      Author: Shams
 */


#include<stdio.h>

void main()
{
	float a, b, c;
	printf("Enter three numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);
	printf("Largest number = %2.2f",((a>b ? (a>c ? a:c):(b>c ? b : c))));
}

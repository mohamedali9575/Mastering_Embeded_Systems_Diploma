/*
 * EX7.c
 *
 *  Created on:
 *      Author: Shams
 */


#include<stdio.h>

void main()
{
	int num,fact = 1;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	if (num > 0)
	{
		for(int i =1; i<=num; i++)
			fact *=i;
		printf("Factorial = %d.",fact);
	}
	else if (num ==0)
		printf("Factorial = 1.");
	else
		printf("Error!!! Factorial of negative number doesn't exist.");

}

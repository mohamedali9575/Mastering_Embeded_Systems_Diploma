/*
 * EX2.c
 *
 *  Created on: ???/???/????
 *      Author: Shams
 */


#include<stdio.h>


int fact(int num);

void main()
{
	int n;
	printf("Enter an positive integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	printf("Factorial of %d = %d",n,fact(n));
}

int fact(int num)
{
	if(num>1)
		return num * fact(num-1);
	else
		return 1;
}

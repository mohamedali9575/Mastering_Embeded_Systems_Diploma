/*
 * EX6.c
 *
 *  Created on: 
 *      Author: Shams
 */


#include<stdio.h>

void main()
{
	unsigned int num, sum=0;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%u",&num);
	for(int i = 1; i <= num; i++)
	{
		sum +=i;
	}
	printf("Sum = %u",sum);
}

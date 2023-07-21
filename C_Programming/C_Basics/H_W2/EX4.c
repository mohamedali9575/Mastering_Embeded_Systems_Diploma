/*
 * EX4.c
 *
 *  Created on: 
 *      Author: Shams
 */


#include<stdio.h>

void main()
{
	float num;
	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&num);
	if (num == 0)
			printf("You entered Zero.");
	else if (num > 0)
		printf("%2.2f is Positive.",num);
	else
		printf("%2.2f is Negative.",num);
}

/*
 * EX8.c
 *
 *  Created on:
 *      Author: Shams
 */


#include<stdio.h>

void main()
{
	char c;
	float a,b;
	printf("Enter operator either {+,-,*,/} : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);
	printf("Enter two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&a,&b);
	switch(c)
	{
	case '+':
	  {
		printf("%2.2f %c %2.2f = %2.2f",a,c,b,a+b);
	  }
	  break;
	case '-':
		  {
			printf("%2.2f %c %2.2f = %2.2f",a,c,b,a-b);
		  }
		  break;
	case '*':
		  {
			printf("%2.2f %c %2.2f = %2.2f",a,c,b,a*b);
		  }
		  break;
	case '/':
		  {
			printf("%2.2f %c %2.2f = %2.2f",a,c,b,a/b);
		  }
		  break;
	default:
	{
    	printf("Error!!!");
	}
	break;
	}
}

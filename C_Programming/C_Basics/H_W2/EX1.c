/*
 ============================================================================
 Name        : EX1.c
 Author      : Shams
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	printf("Enter an integer you want to check: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	if((a%2)== 0)
		printf("%d is even.",a);
	else
		printf("%d is odd.",a);
	return EXIT_SUCCESS;
}

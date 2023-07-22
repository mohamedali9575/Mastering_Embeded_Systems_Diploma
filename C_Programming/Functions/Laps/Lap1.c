/*
 ============================================================================
 Name        : Lap1.c
 Author      : Shams
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fact(int num);

int main(void) {
	int num;
	printf("Enter The number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("Factorial(%d) = %d ",num,fact(num));
	return EXIT_SUCCESS;
}
int fact(int num)
{
	int f=1;
	for(int i=1; i<=num;i++)
	{
		f *=i;
	}
	return f;
}

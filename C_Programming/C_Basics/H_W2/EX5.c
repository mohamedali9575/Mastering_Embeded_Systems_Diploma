/*
 * EX5.c
 *
 *  Created on: ١٧‏/٠٨‏/٢٠٢٢
 *      Author: Shams
 */


#include<stdio.h>

void main()
{
	char c;
	printf("Enter a character: ");
	fflush(stdin);  fflush(stdout);
	scanf("%c",&c);
	printf("%c is %s alphabet.",c,((c>=97 && c<=122)? "an":"not"));

}

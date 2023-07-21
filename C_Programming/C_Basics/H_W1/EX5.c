///*
// * EX5.c
// *
// *  Created on:
// *      Author: Shams
// */
////Write C Program to Find ASCII Value of a Character
//
//
#include<stdio.h>

void main()
{
	char c;
	printf("Enter a charactar: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);
	printf("ASCII value of %c = %d",c,c);
}

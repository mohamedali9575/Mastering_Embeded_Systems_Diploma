/*
 * EX2.c
 *
 *  Created on: 
 *      Author: Shams
 */


#include<stdio.h>

int main(void){
	char alph;
	printf("Enter an alphabet: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&alph);

	switch(alph)
{
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	{
		printf("%c is vowel.",alph);
	}
	break;
	default:
	{
		printf("%c is consonant.",alph);
	}
	break;
}
	return 0;

}

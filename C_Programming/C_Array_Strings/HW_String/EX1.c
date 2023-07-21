/*
 ============================================================================
 Name        : HW_String.c
 Author      : Shams
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char s[200], c,counter=0;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(s);
	printf("Enter a character to find frequency: " );
	fflush(stdin);  fflush(stdout);
	scanf("%c",&c);
	for(int i =0;i<strlen(s);i++){
		if(s[i]==c)
			counter++;
	}
	printf("Length of string: %d",counter);
	return EXIT_SUCCESS;
}

/*
 * EX3.c
 *
 *  Created on: ???/???/????
 *      Author: Shams
 */

#include<stdio.h>
#include<string.h>

void reverse(char sent[],int count);

void main()
{
	char sent[200];
	printf("Enter a sentence: ");
	fflush(stdin); fflush(stdout);
	gets(sent);
	reverse(sent,strlen(sent)-1);

}

//void reverse(char sent[])
//{
//	int count = strlen(sent);
//
//		for(int i = count-1;i>=0; i--)
//			printf("%c",sent[i]);
//}
void reverse(char sent[],int count)
{

	if (count >= 0)
	{
		printf("%c",sent[count]);
		reverse(sent,count-1);

	}
}

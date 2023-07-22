/*
 * Lap3.c
 *
 *  Created on: ٢٥‏/٠٩‏/٢٠٢٢
 *      Author: Shams
 */


#include<stdio.h>

void tri(int n)
{
	for(int count =0;count<=n;count++)
	{
		for(int i=count; i<=n;i++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
int main(void)
{
	tri(9);
	return 0;
}

#include<stdio.h>

void main()
{
	for(int i = 9, c = 0; c <= i; c++)
	{
		for(int b = c ; b <= i ; b++)
		{
			printf("%d",b);
		}
		printf("\n");
	}
}
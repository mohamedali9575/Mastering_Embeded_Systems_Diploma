/*
 * Lap3.c
 *
 *  Created on: ٢٠‏/٠٨‏/٢٠٢٢
 *      Author: Shams
 */


#include<stdio.h>

void main()
{
	float ar[3][3];
	float ar2[3][3];
	for(int row=0; row<3; row++)
	{
		for(int colum =0;colum<3;colum++ )
		{
			printf("Enter the (%d,%d)item : ",row,colum);
			fflush(stdin); fflush(stdout);
			scanf("%f",&ar[row][colum]);
		}
	}
	printf("The Matrix is : \n");

	for(int row=0; row<3; row++)
	{
		for(int colum =0;colum<3;colum++ )
		{

			printf("%2.2f\t",ar[row][colum]);

		}
		printf("\n");
	}
	for(int row=0; row<3; row++)
		{
			for(int colum =0;colum<3;colum++ )
			{
				ar2[row][colum] = ar[colum][row];
			}
		}


	printf("The Matrix After is : \n");
	for(int row=0; row<3; row++)
		{
			for(int colum =0;colum<3;colum++ )
			{

				printf("%2.2f\t",ar2[row][colum]);

			}
			printf("\n");
		}

}

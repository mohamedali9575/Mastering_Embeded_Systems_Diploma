/*
 * Lap2.c
 *
 *  Created on: ١٢‏/٠٩‏/٢٠٢٢
 *      Author: Shams
 */


#include <stdio.h>

int calcMin(int values[],int n)
{
	int i=1,minvalue = values[0];
	while(i < n)
	{
		if (minvalue > values[i])
			minvalue = values[i];
	}
	return minvalue;
}
void main()
{
	int val[]={2,6,3,9,48,3,0,-22};

	printf("%d",calcMin(val,8));

}

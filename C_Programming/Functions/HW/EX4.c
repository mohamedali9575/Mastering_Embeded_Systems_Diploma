/*
 * EX4.c
 *
 *  Created on: ???/???/????
 *      Author: Shams
 */


#include <stdio.h>

int power(int num, int power_num)
{

	if(power_num >0)
	  return num*power(num,power_num-1);
	else
	  return 1;
}
void main()
{
	int base,power_num;
	printf("Enter base number: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&base);
	printf("Enter power number(positive integer) : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&power_num);
	printf("%d ^ %d = %d",base,power_num,power(base,power_num));

}

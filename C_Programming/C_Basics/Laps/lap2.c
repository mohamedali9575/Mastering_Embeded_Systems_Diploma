#include<stdio.h>

void main()
{
	int a, b, c;
	printf("Enter Three Values : ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d %d",&a,&b,&c);
	if (a > b && a > c)
	printf("the largest is : %d \n",a);
	else if (b>c && b>a)
		printf("the largest is : %d",b);
	else
		printf("the largest is : %d",c);
}
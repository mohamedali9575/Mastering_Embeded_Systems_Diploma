#include<stdio.h>

void main()
{
	int a, b;
	printf("Enter Two Numbers : ");
	fflush(stdin);   fflush(stdout);
	scanf("%d %d",&a,&b);
	fflush(stdin);   fflush(stdout);
	printf("The minimum is : %d",((a > b)? b :a));

}
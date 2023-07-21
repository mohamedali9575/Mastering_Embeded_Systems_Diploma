#include<stdio.h>

void main()
{
	int num_student=0,deg=0, i = 1,sum=0;
	printf("Enter the Number Of Students : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num_student);

	while (num_student >= i )
	{
		printf("Enter Student (%d) degree : ",i);
		fflush(stdin); fflush(stdout);
		scanf("%d",&deg);
		i++;
		sum += deg;
	}
	printf("\t \t Thanks... \n Average students degree is : %d ",(sum/num_student));

}
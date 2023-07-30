#include<stdio.h>

int prime(int num,int b);

void main()
{
 int a=20,b=50;
 printf("Enter two numbers (intervals): ");
 fflush(stdin);  fflush(stdout);
 scanf("%d %d",&a,&b);
 printf("The prime numbers is: ");
 prime(a,b);
}


int prime(int num,int b)
{
	while(b>=num)
	{
		int flag = 0;
			if (num == 1 ||num == 0)
				flag = 1;

            int i;    

			for(i = 2;i<=num/2;i++)
				{
					if (num % i==0)
					{
						flag=1;
						break;
					}

				}
			if (flag == 0)
			{
			   printf("%d ",num);
			   return prime(num+1,b);
			}
			else
			  return prime(num+1,b);
	}
	return 0;
}

#include<stdio.h>



#define Size 5


void main()
{

   int array[Size];
   int sum=0;
   int *parray=array;

   for(int i = 0;i<Size;i++)
   {
      printf("Enter %d: ",i+1);
      scanf("%d",array + i);
   }
      

   for(int i = 0; i<Size; i++,parray++)
      printf("%d 	",*parray);

      
parray =array;


   for(int i = 0; i<Size;i++)
      sum += *parray++;
  
   printf("\nSum of Elements: %d",sum);	
}
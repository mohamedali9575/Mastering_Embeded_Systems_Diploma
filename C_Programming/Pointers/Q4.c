#include<stdio.h>

void Enter_Your_Element( char *ptr,char *num);
void Showing_in_revers_order(char *ptr,char *num);



void main()
{
   char elements[50];
   char *ptr = elements;
   char num_elements;
printf("                                                    Pointers Value Before : 0X%x\n",ptr);
   Enter_Your_Element(ptr, &num_elements);
printf("                                                    Pointers Value After (Enter_Your_Element): 0X%x\n\n",ptr);
        ptr = elements+num_elements;
printf("                                                    Pointer After adding (num_elements): 0X%x\n",ptr);   
 printf("%d",num_elements);
   Showing_in_revers_order(ptr,&num_elements);
   printf("                                                    Pointer After (Showing_in_revers_order): 0X%x\n",ptr);
}

void Enter_Your_Element(char *ptr,char *num)
{
    
  printf("Input the number of elements to store in the array (max 15) : ");
  scanf("%d",num);
  for(int c =0; c < *num; c++)
  {
    printf("Element -%d: ",c+1,ptr++);
    scanf("%d",ptr);
  }

}
void Showing_in_revers_order(char *ptr,char* num)
{
  
    printf("The elements of array in reverse order are :\n");
    for(char i = *num;i>0 ;i--,ptr--)
    {
        printf("Element -%d: %d\n",i,*ptr);
    }

}
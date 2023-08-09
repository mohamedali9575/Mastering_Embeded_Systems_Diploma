#include<stdio.h>


void main()
{
    char alpha[26];
    char* ptr = alpha;

    for(char letter = 'A';letter<='Z';letter++,ptr++)
       *ptr = letter;
    
    ptr = alpha;

    for(char i =0;i<26;i++,ptr++)
      printf("%c  ",*ptr);
}
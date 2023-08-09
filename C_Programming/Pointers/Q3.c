#include<stdio.h>
#include<string.h>

void main()
{
    char S[200];
    char*ptrS = NULL;

    printf("Input a string : ");
    gets(S);
    
    ptrS = S + strlen(S)-1;
    printf("Reverse of the string is : ");
    for(int i = 0; i<strlen(S);i++,ptrS--)
        printf("%c",*ptrS);

}

#include<stdio.h>

#define size 10

struct SStudent
{ 
    char m_name[40];
    float m_mark;
};


struct SStudent read_data();
void show_data(struct SStudent S,int Roll_num);

void main()
{
    struct SStudent students[size];
    int num=0,i;
    // char c;
    do{
        printf("For Roll number %d:\n",num+1);
        students[num] = read_data();
        num++;
    }while (num < size) ; 

    for(i=0;i<num;i++)
    {
        show_data(students[i],i+1);
    }
    
}

struct SStudent read_data()
{
    struct SStudent S;
    printf("Entr information of students:\nEnter name: ");
    scanf("%s",S.m_name);
    printf("Enter marks: ");
    scanf("%f",&S.m_mark);

    return S;
}

void show_data(struct SStudent S,int Roll_num)
{
    printf("\n\nDisplaying information for students: \nInformation of Roll number: %d \nName: %s \nMarks: %.2f",Roll_num,S.m_name,S.m_mark);
}
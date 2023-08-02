#include<stdio.h>


struct SStudent
{ 
    char m_name[40];
    int m_roll ;
    float m_mark;
};


struct SStudent read_data();
struct SStudent show_data(struct SStudent S);

void main()
{
    struct SStudent student_1;

    student_1 = read_data();
    show_data(student_1);
}

struct SStudent read_data()
{
    struct SStudent S;
    printf("Entr information of students:\nEnter name: ");
    scanf("%s",S.m_name);
    printf("Enter roll number: ");
    scanf("%d",&S.m_roll);
    printf("Enter marks: ");
    scanf("%f",&S.m_mark);

    return S;
}

struct SStudent show_data(struct SStudent S)
{
    printf("Displaying information \nName: %s\nRoll: %d \nMarks: %.2f",S.m_name,S.m_roll,S.m_mark);
}
#include<stdio.h>

struct SEmployee
{ 
  char m_EName[100];
  unsigned int  m_EID;
};

void main()
{
 
 struct SEmployee a = {"Mohamed", 1401} ;
 struct SEmployee b = {"Alex", 1200} ;
 struct SEmployee c = {"Mahmoud", 1300} ;
 struct SEmployee *Sarray[]={&a,&b,&c};
 struct SEmployee **PSarray = Sarray;


 printf("Employee Name: %s\nEmployee ID: %d\n",(*PSarray)->m_EName,(*PSarray)->m_EID);
 PSarray++;
 printf("Employee Name: %s\nEmployee ID: %d\n",(*PSarray)->m_EName,(*PSarray)->m_EID);
 PSarray++;
 printf("Employee Name: %s\nEmployee ID: %d\n",(*PSarray)->m_EName,(*PSarray)->m_EID);

}
#include<stdio.h>
#include<string.h>


struct SDate
{
   int m_Day;
   int m_Month;
   int m_Year;	
};


struct SName
{
	char m_First_Name[50];
	char m_Second_Name[50];

};


struct SEmployee 
{
	struct SName m_Employee_Name;
	struct SDate m_Employee_BirthDate;
	struct SDate m_Employee_GraduationDate;
	int m_Salary;

};


struct SEmployee read_data();
void print_EmployeeData(struct SEmployee x);
struct SDate read_date(char date_name[]);


void main()
{
	struct SEmployee x = read_data();
	print_EmployeeData(x);
}

struct SEmployee read_data()
{
    struct SEmployee x; 
//Reading name 
	printf("Enter Your First name: ");
	scanf("%s",x.m_Employee_Name.m_First_Name);

	printf("Enter Your Last Name: ");
	scanf("%s",x.m_Employee_Name.m_Second_Name);

// Reading dates of employee 
	x.m_Employee_BirthDate = read_date("BirthDate");
	x.m_Employee_GraduationDate = read_date("GraduationDate");

// Reading Salary

    printf("Enter Your Salary: ");
    scanf("%d",&x.m_Salary);
	
	return x;

}

struct SDate read_date(char date_name[])
{
	struct SDate date;

    //input the data.
	printf("Enter Your %s: ",date_name);
	scanf("%d/%d/%d",&date.m_Day,&date.m_Month,&date.m_Year);

	return date;
}


void print_EmployeeData(struct SEmployee x)
{
	// Showing Data For Customer.
	printf("Your Data is : \n 	Name: %s %s \n 	BirthDate: %d/%d/%d \n 	GradutionDate: %d/%d/%d \n 	Salary: %d",
							x.m_Employee_Name.m_First_Name,
							x.m_Employee_Name.m_Second_Name,
							x.m_Employee_BirthDate.m_Day,
							x.m_Employee_BirthDate.m_Month,
							x.m_Employee_BirthDate.m_Year,
							x.m_Employee_GraduationDate.m_Day,
							x.m_Employee_GraduationDate.m_Month,
							x.m_Employee_GraduationDate.m_Year,
							x.m_Salary);
							
}
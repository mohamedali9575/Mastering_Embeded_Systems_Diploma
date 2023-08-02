#include<stdio.h>
#include<string.h>


struct SComplex 
{
	double m_R; //Real Part
	double m_I; //Imaginary Part
};

struct SComplex ReadComplex(char name[]);
struct SComplex AddComplex(struct SComplex A,struct SComplex B);
void printComplex(char nume[],struct SComplex Z);


void main()
{
	struct SComplex X, Y, Z;

	X = ReadComplex("1st");
	Y = ReadComplex("2nd");
	Z = AddComplex(X, Y);
	printComplex("Sum",Z);

}
// Entry my Numbeer.
struct SComplex ReadComplex(char name[])
{
    struct SComplex num;
    printf("For %S Complex Number:\n");
	printf("Enter real & emaginary Respectively: ",name);
    scanf("%lf %lf", &num.m_R, &num.m_I);

	return num;
}

// Adding
struct SComplex AddComplex(struct SComplex A,struct SComplex B)
{
	struct SComplex Sum;
	Sum.m_R= A.m_R + B.m_R;
	Sum.m_I= A.m_I + B.m_I;

	return Sum;
}

void printComplex(char name[],struct SComplex Z)
{
	printf("%s = (%1.2f) + j(%1.2f)\r\n",name,Z.m_R,Z.m_I);
}
#include<stdio.h>

struct SDistance
{
    int feet ;
    float inch;
};

struct SDistance read_D(char name[]);
struct SDistance Add(struct SDistance a,struct SDistance b);

void main()
{
    struct SDistance a,b,sum;
    a = read_D("1st Distance");
    b = read_D("2nd Distance");
    sum = Add(a,b);
    printf("Sum of distances = %d\'-%.2f\"",sum.feet,sum.inch);

}

struct SDistance read_D(char name[])
{
    struct SDistance d;
    printf("Enter %s :\n",name);
    printf("Enter feets: ");
    scanf("%d",&d.feet);
    printf("Enter feets: ");
    scanf("%f",&d.inch);
    return d;
}

struct SDistance Add(struct SDistance a,struct SDistance b)
{
    struct SDistance total;
    total.feet = a.feet + b.feet;
    total.inch = a.inch +b.inch;
    if (total.inch >= 12.0 )
    {
        ++total.feet;
        total.inch-=12;
    } 

    return total;
}

#include <stdio.h>
#include <math.h>
double GetDouble()
{
    double q;
    scanf("%lf",&q);
    return q;
}
double Przeciwprostokontna(double a,double b)
{
    a*=a;b*=b;
    return sqrt(a+b);
}
int main()
{
    double a=GetDouble(),b=GetDouble();
    printf("\n %lf",Przeciwprostokontna(a,b));
}
#include <stdio.h>
char jednostka[2];
double obliczanie(double wzrost)
{

    double cal=2.54,odp;
    if(jednostka[0]=='c'&&jednostka[1]=='m')
    {
        odp=wzrost/cal;
        return odp;
    }
    else if (jednostka[0]=='i'&&jednostka[1]=='n')
    {
        odp=wzrost*cal;
        return odp;
    }
    else
    {
        printf ("Błąd Jednostki");
        return 0;
    }
}
int main()
{
    double wzrost;
    scanf("%lf ",&wzrost);
    scanf("%s",jednostka);
    printf ("%0.4f \n",obliczanie(wzrost));
}
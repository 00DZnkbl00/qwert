#include <stdio.h>
int jest_pierwsza;  // 1=TAK  2=NIE
int GetInt()
{
    int q;
    scanf("%d",&q);
    return q;
}
void sprawdzenie(int n,int q)
{
    if (q==1)
    {
        jest_pierwsza=1;
    }
    else if(n%q==0)
    {
        jest_pierwsza= 0;
    }
    else
    {
       sprawdzenie(n,--q);
    }
 }
 float obliczanie_pi(int i)
 {
     int plus_or_minus=0;
    long double n=2,wynik=4;
     while(i>0)
     {
        ++n;
        sprawdzenie(n,n-1);
        if(jest_pierwsza==1)
        {
            --i;
            if (plus_or_minus==0)
            {
                wynik-=(4/n);
                plus_or_minus=1;
                printf("%.10Lf-%.10Lf__0\n",wynik,4/n);
            }
            else
            {
                wynik+=(4/n);
                plus_or_minus=0;
                printf("%.10Lf-%.10Lf__1\n",wynik,4/n);
            }
        }
     }
     return wynik;
 }
int main() 
{
  int n;
  printf("Ilość liczb po przecinku; ");
  n=GetInt();
  printf("Podana liczba '%f' jest\n",obliczanie_pi(n));
  return 0;
}
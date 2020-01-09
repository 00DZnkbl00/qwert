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
int main() {
  int n;
  printf("Podaj liczbe calkowita: ");
  n=GetInt();
  sprawdzenie(n,n-1);
  printf("Podana liczba '%d' jest %s\n",
    n, (jest_pierwsza==1) ? "pierwsza" : "złożona");
  return 0;
}
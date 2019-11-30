#include <stdio.h>

int main() 
{
int exponent=100,n=4;
double S_4=0;
 for (int i=1;i<=n;i++)
 {
     S_4+=pow(i, exponent);
 }
printf("\n");
printf("%2lf\n",S_4);
 
  return 0;
}
 
#include <stdio.h>
int odliczanie(int i)
{
    int opd=0, x=1;
    while (x<=i)
    {
        opd=opd+x;
        x++; 
    }
    return opd ;
    
}
void niezero(int a)
{
    if(a>0)
    {
        printf("%d\n", odliczanie(a));
    }
    else
    {
        printf("AWARIA \n");
    }
}
int pobranie()
{
    int q;
    scanf("%d",&q);
    return q;
}
int main() 
{
    int a=pobranie();
    printf("\n");
    niezero(a);
    return 0;
}
 
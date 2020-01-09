#include <stdio.h>
void odliczanie(int i,int x)
{
    while (i<x-1)
    {
        printf("%d\n", ++i);
    }
    printf("fdsfsdf \n");
    
}
void porownanie(int a, int b)
{
    if(a<b)
    {
        odliczanie(a,b);
    }
        else if(a>b)
    {
        odliczanie(b,a);
    }
    else
    {
        printf("Brak liczb pomiędzy \n");
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
    int b=pobranie();
    printf("\n");
    porownanie(a,b);
    return 0;
}
#include <stdio.h>
void odliczanie(int i,int x)
{
    while (i<x-1)
    {
        printf("%d\n", ++i);
    }
    
}

int main() 
{
    int a=2010;
    int b=2030;
    if(a<b)
    {
        odliczanie(a,b);
    }
        else if(a>b)
    {
        odliczanie(a,b);
    }
    else
    {
        printf("Brak liczb pomiędzy \n");
    }
    
    return 0;
}
 
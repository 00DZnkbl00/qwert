#include <stdio.h>
int silnia(int x)
{
    if (x>1)
    return x*silnia(x-1);
    else
    {
        return 1;
    }
    
}
int main()
{
    for (int x=0;x<10;x++)
    {printf(" %d \n",silnia(x));}
}
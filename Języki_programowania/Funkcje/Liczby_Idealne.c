#include <stdio.h>
int GetInt()
{
    int q;
    scanf("%d",&q);
    return q;
}
int perfect(int x,int y)
{
    if (x>1&&y%x==0)
    {
        return x+perfect(x-1,y);
    }
    else if (x<=1)
    {
        return 1;
    }
    else
    {
        return perfect(x-1,y);
    }
    
    
}
void sprawdzenie(int a,int b)
{
    if (a==b)
    {
        printf("%d\n",a);
    }
}
int main()
{
    for (int x=2;x<=10000;x++)
    {sprawdzenie(x,perfect(x-1,x));}
}
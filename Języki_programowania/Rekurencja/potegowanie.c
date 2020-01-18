#include <stdio.h>
int GetInt()
{
    int q;
    scanf("%d",&q);
    return q;
}
int potegowanie(int n,int k)
{
    if (k==0)
    {
        return 1;
    }
    else
    {
        return n*potegowanie(n,k-1);
    }
}
int main(void)
{
    printf("Wpisz n a nastepnie k");
    int n=GetInt(),k=GetInt();
    printf("%d",potegowanie(n,k));
}
//

#include <stdio.h>
int pobranie()
{
    int q;
    scanf("%d",&q);
    return q;
}
int obliczanie(int liczba)
{
    int wynik=1;
    if (liczba<=1)
    {
        return 1;
    }
    for (int i=1;i<=liczba;i++ )
    {
        wynik*=i;
    }
    return wynik;
}
int main() {
    int liczba=pobranie() ;
    printf("%d \n",obliczanie(liczba));
    return 0;
}
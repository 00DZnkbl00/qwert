#include <stdio.h>
#include <unistd.h>
int pobranie()
{
    int q;
    scanf("%d",&q);
    return q;
}
int main() {
    int tablica[6];
    int wynik=0;
    for(int x=0;x<6;x++)
    {
        tablica[x]=pobranie();
    }
    for(int y=0;y<6;y++)
    {
        if(tablica[y]%2==0)
        {
            wynik++;
        }
    }
    printf("%d\n",wynik);
  return 0;
}
 
#include <stdio.h>
int pobranie()
{
    int q;
    scanf("%d",&q);
    return q;
}
//poziom
void post(int buba,int ob)
{
            int y=1;
        while (y<=buba*2)
        {
            if(ob==1)
            {
                printf("*");
                ob=0;
            }
            else
            {
                printf(" ");
                ob=1;
            }
            y++;
        }
}
//pion
int main() {
      //int luba=8 ; // wysokość
      //int buba=8 ;  // długość - ilość gwiazdek
      int luba=pobranie();
      int buba=pobranie();
      int op=1; // wartość logiczna
    for( int i=1;i<=luba;i++)
    {
        if(op==1)
            {
                post(buba,op);
                op=0;
            }
            else
            {
                post(buba,op);
                op=1;
            }
        
        printf("\n");
    }
  return 0;
}
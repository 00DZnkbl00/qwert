#include <stdio.h>
#include <stdlib.h> 
#include<time.h>
int GetInt()
{
    int q;
    scanf("%d",&q);
    return q;
}
int RandomNumber(int range)
{
    return rand()%range;
}
void game(int x)
{
    while (1)
    {
        int odp=GetInt();
        if(odp<x)
        {
            printf("za mało\n");
        }
        else if (odp>x)
        {
            printf("za dużo\n");
        }
        else
        {
            printf("gratulacje, zgadłeś!\n");
            break;
        }
    }
}
int main()
{
    srand(time(0));
    //int range_from=1,range_to=1000;
    int number=RandomNumber(1000)+1;
    printf("Odgannij liczbe z przedziału od 1 do 1000 \n");
    game(number);
    
}
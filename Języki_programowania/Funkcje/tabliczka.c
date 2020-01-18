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
int check(int odp,int x)
{
    if(odp==x)
    {
        switch (RandomNumber(3))
        {
        case 0:
            printf("Bardzo dobrze! \n");
        break;
        case 1:
            printf("Świetnie! \n");
        break;
        default:
            printf("Dobra robota! \n");
        break;
        }
        return 1;
    }
    else
    {
        switch (RandomNumber(3))
        {
        case 0:
            printf("Zła odpowiedź \n");
        break;
        case 1:
            printf("Oj, niedobrze \n");
        break;
        default:
            printf("Następnym razem może pójdzie Ci lepiej. \n");
        break;
        }
        return 0;
    }
    
}
int main()
{
    srand(time(0));
    int range=100,UserAnwser,correct=0;
    for(int z=0;z<5;z++)
    {
        int a=RandomNumber(range)+1,b=RandomNumber(range)+1;
        printf("Ile to %d * %d \n",a,b);
        UserAnwser=GetInt();
        correct+=check(a*b,UserAnwser);
    }
    printf("Udzieliłeś %d dobrych odpowiedzi oraz %d złych \n",correct,5-correct);
}
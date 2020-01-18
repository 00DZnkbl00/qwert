#include <stdio.h>
int GetInt()
{
    int q;
    scanf("%d",&q);
    return q;
}
int calculate_days(int wiek)
{
    int odp=0;
    for(int x=0;x<wiek;x++)
    {
        if ((2020-x)%4==0 && (2020-x)%100!=0 || (2020-x)%400 == 0)
        {
            odp+=366;
        }
        else
        {
            odp+=365;
        }
        
    }
    return odp;
}
int main()
{
    printf("Podaj swój wiek: ");
    int wiek=GetInt();
    printf("%d dni",calculate_days(wiek));
}

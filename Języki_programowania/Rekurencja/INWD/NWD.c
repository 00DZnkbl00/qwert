#include "Euklides.h"
#include "GetInt.h"
int GetInt();
int Euklides();

int main(void)
{
    printf("Wpisz a a nastepnie b");
    int a=GetInt(),b=GetInt();
    printf("%d",Euklides(a,b));
}

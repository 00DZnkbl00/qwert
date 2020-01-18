#include <stdio.h>

void figura1()
{
    for(int x=1;x<=4;x++)
    {
        for(int y=0;y<x;y++)
        {
            putchar('*');
        }
        printf("\n");
    }
}
void figura2()
{
    for(int x=4;x>0;x--)
    {
        for(int y=x;y>0;y--)
        {
            putchar('*');
        }
        printf("\n");
    }
}
void figura3()
{
    for(int x=1;x<=4;x++)
    {
        for(int y=0;y<4-x;y++)
        {
            putchar(' ');
        }
        for(int y=0;y<x;y++)
        {
            putchar('*');
        }

        printf("\n");
    }
}
void figura4()
{
    for(int x=4;x>0;x--)
    {
        for(int y=0;y<4-x;y++)
        {
            putchar(' ');
        }
        for(int y=x;y>0;y--)
        {
            putchar('*');
        }
        printf("\n");
    }
}
int main()
{
figura1();
printf("\n");
figura2();
printf("\n");
figura3();
printf("\n");
figura4();
}
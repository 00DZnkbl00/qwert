#include <stdio.h>
char number[402];
int input()
{
    char c;int a=0;
    while ((c=getchar()) != '\n')
    {
        number[a]=c;
        a++;
    }
    return a;
}
void output(int a)
{
    for (int x=a-1;x>=0;x--)
    {
        printf("%d ",number[x]-48);
    }
}
int main()
{
    int a=input();
    output(a);
}
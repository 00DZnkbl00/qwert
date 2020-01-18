#include <stdio.h>
int ASCI[400];
int CharAsInt()
{
    char c;int a=0,logic=1;
   while ((c=getchar()) != '\n')
    {
        ASCI[a]=c;
        
        if (ASCI[a]!=48 && ASCI[a]!=49 )
        {
            logic=0;
        }
        a++;
    }
    ASCI[a+1]=-1;
    if (ASCI[0]==48&&ASCI[1]==120)
    {
        int mnoznik=1,wynik=0;
        for(int x=a-1;x>1;x--)
        {
            if((ASCI[x]>57||ASCI[x]<48)&&(ASCI[x]>69||ASCI[x]<65))
            {return -1;}
            if(ASCI[x]<69&&ASCI[x]>65)
            {ASCI[x]-=7;}
            wynik+=(ASCI[x]-48)*mnoznik;
            mnoznik*=16;
        }
        return wynik;
    }
    else if (logic==1 && ASCI[0]==48)
    {
        int mnoznik=1,wynik=0;
        for(int x=a;x>0;x--)
        {
            wynik+=(ASCI[x]-48)*mnoznik;
            mnoznik*=2;
        }
        return wynik;
    }
    else
    {
        int mnoznik=1,wynik=0;
        for(int x=a-1;x>=0;x--)
        {
            if(ASCI[x]>57||ASCI[x]<48)
            {return -1;}
            wynik+=(ASCI[x]-48)*mnoznik;
            mnoznik*=10;
        }
        return wynik;
    }
    
}
void anwser(int a)
{
    if (a>=0&&a<33)
    {
        printf("znak niedrukowalny\n");
    }
    else if (a==-1)
    {
        printf("błąd danych\n");
    }
    else if (a>126)
    {
        printf("błąd danych\n");
    }
    else
    {
        char c = a;
        printf("%c\n",c);
    }
    
}
int main()
{
    int a;
    printf("Podaj kod ASCII: ");
    a=CharAsInt();
    anwser(a);
}
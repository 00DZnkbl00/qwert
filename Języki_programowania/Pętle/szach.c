#include <stdio.h>
int GetInt()
{
    int q;
    scanf("%d",&q);
    return q;
}
void Poziom(int lenght,int ob)
{
            int y=1;
        while (y<=lenght*2)
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
int main() {
      int height=GetInt();
      int lenght=GetInt();
      int op=1; // wartość logiczna
    for( int i=1;i<=height;i++)
    {
        if(op==1)
            {
                Poziom(lenght,op);
                op=0;
            }
            else
            {
                Poziom(lenght,op);
                op=1;
            }
        
        printf("\n");
    }
  return 0;
}
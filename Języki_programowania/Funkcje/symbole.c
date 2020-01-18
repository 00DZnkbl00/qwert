#include <stdio.h>
void spajce(int f)
{
    for(int y=1;y<f;y++)
        {
            printf(" ");
        }
}
void gwiazdki(int f)
{
    for(int y=1;y<=f;y++)
        {
            printf("*");
        }
}
void kwadrat(int height,int lenght,int x)
{
    if(x==1||x==height)
    {
        for(int y=1;y<=lenght;y++)
        {
            printf("*");
        }
    }
    else
    {
        for(int y=1;y<=lenght;y++)
        {
            if(y==1||y==lenght)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
    }
    
}
void arrow(int height,int lenght,int x)
{
    if(x<=height/2&&x<=lenght/2)
    {
        int stars=x*2-1;
        int spacebars=(lenght-(stars/2)-1)-(lenght-stars)%2;
        spajce(spacebars);
        gwiazdki(stars);
        spajce(spacebars);
    }
    else
    {
        int spacebars=(lenght-1)-(lenght-1)%2;
        spajce(spacebars);
        gwiazdki(1);
        spajce(spacebars);
    }
    
}
void diamond(int height,int x)
{
    int lenght=height;
    if(x<=height/2&&x<=lenght/2)
    {
        int stars=x*2-1;
        int spacebars=(lenght-(stars/2)-1)-(lenght-stars)%2;
        spajce(spacebars);
        for(int y=1;y<=stars;y++)
        {
            if(y==1||y==stars)
            {printf("*");}
            else
            {printf(" ");}
        }
        spajce(spacebars);
    }
    else
    {
        x=height-x+1;
        int stars=x*2-1;
        int spacebars=(lenght-(stars/2)-1)-(lenght-stars)%2;
        spajce(spacebars);
        for(int y=1;y<=stars;y++)
        {
            if(y==1||y==stars)
            {printf("*");}
            else
            {printf(" ");}
        }
        spajce(spacebars);
    }
    
}
int GetInt()
{
    int q;
    scanf("%d",&q);
    return q;
}
int main()
{
    int height=GetInt(), lenght=GetInt();
    for(int x=1;x<=height;x++)
    {
        kwadrat(height,lenght,x);
        printf(" ");
        arrow(height,lenght,x);
        printf(" ");
        diamond(height,x);
        printf("\n");

    }
}
#include <stdio.h>
int point_x=0;
int point_y=0;
int pobranie()
{
    int q;
    scanf("%d",&q);
    return q;
}
void game_screen()
{
    int height=3, lenght=6;
    int tab[height][lenght];
        for (int x=0;x<height;x++)
    {
        printf("\n");
        for (int y=0;y<lenght;y++)
        {
            if (x==point_x && y==point_y)
            {tab[x][y]=8;}
            else
            {tab[x][y]=0;}
        }
    }
    for (int x=0;x<height;x++)
    {
        printf("\n");
        for (int y=0;y<lenght;y++)
        {
            printf("%d",tab[x][y] );
        }
    }
}
void move()
{
        int key;
        key=pobranie();
        if(key==8)
        { point_x++; }
        else if (key==4)
        { point_y--; }
        else if (key==6)
        { point_y++; }
        else if (key==2)
        { point_x--; }
}
int main()
{
    while(1)
    {
        game_screen();
        move();
        std:system("clear");
    }
}
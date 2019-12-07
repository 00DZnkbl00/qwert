#include <stdio.h>
int spawn_point_x=3, spawn_point_y=3; //punkt startowy
int height=15, lenght=40; //rozmiary mapy
int point_x[21]={5,10,10,3,9,8,2,4,7,8,12,9,11,6,14,12,5,2,10,3,13};
int point_y[21]={6,1,37,25,9,9,13,22,34,14,24,20,29,22,22,38,9,17,8,22,6};
int wynik=0;
int pobranie()
{
    int q;
    scanf("%d",&q);
    return q;
}
void game_screen()
{
    int tab[height][lenght];
        for (int x=0;x<height;x++)
    {
        for (int y=0;y<lenght;y++)
        {
            if (x==spawn_point_x && y==spawn_point_y)
            {tab[x][y]=2;}
            else if (x==0 || x==height-1 || y==0 || y==lenght-1 )
            {
                {tab[x][y]=1;}
            }
            else if (x==point_x[wynik%20] && y==point_y[wynik%20])
            {
                {tab[x][y]=3;}
            }
            else
            {tab[x][y]=0;}
        }
    }
    for (int x=0;x<height;x++)
    {
        printf("\n");
        for (int y=0;y<lenght;y++)
        {
            //printf("%d",tab[x][y] );
            if (tab[x][y]==1)
           {printf("X");}
            else if (tab[x][y]==2)
            {printf("O");}
            else if (tab[x][y]==3)
            {printf("*");}
           else
           {printf(" ");}
           
        }
    }
}
void move()
{
        int key;
        key=pobranie();
        if(key==8 && spawn_point_x<height-2)
        { spawn_point_x++; }
        else if (key==4 && spawn_point_y>1)
        { spawn_point_y--; }
        else if (key==6 && spawn_point_y<lenght-2)
        { spawn_point_y++; }
        else if (key==2 && spawn_point_x>1)
        { spawn_point_x--; }
}
int main()
{
    while(1)
    {
        printf("up=2 , down=8 , left=6 , right=4");
        game_screen();
        printf("\n SCORE: %d MOD: %d  %d - %d  %d - %d \n",wynik,wynik%20,point_x[wynik%20],point_y[wynik%20],spawn_point_x,spawn_point_y);
        move();
        if(spawn_point_x==point_x[wynik%20]&&spawn_point_y==point_y[wynik%20])
        {
            wynik++;
        }
        system("clear");
    }
}
#include <stdio.h>
int sorted_array[6];
int get_int()
{
    int q;
    scanf("%d",&q);
    return q;
}
void to_the_array()
{
    for(int i=0;i<6;i++)
    {
        printf ("Podaj liczbe nr %d \n",i+1);
        sorted_array[i]=get_int();
    }
}
void of_the_array()
{
    for(int i=0;i<6;i++)
    {
        printf ("- %d \n",sorted_array[i]);
    }
}
int main()
{
    printf ("Podaj liczbe nr \n");
    to_the_array();
    of_the_array();
    return 0;
}
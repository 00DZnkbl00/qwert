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
void min_max()
{
    int min=sorted_array[0],max=sorted_array[0];
    for(int i=1;i<6;i++)
    {
        if(min>sorted_array[i])
        {min=sorted_array[i];}
        else if(max<sorted_array[i])
        {max=sorted_array[i];}
    }
    printf ("MIN %d \n",min);
    printf ("MAX %d \n",max);
}
int main()
{
    to_the_array();
    min_max();
    return 0;
}
int Euklides(int a,int b)
{
    if (a==b)
    {
        return a;
    }
    else if(a>b)
    {
        return Euklides(a-b,b);
    }
    else
    {
        return Euklides(a,b-a);
    }
}
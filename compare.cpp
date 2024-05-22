bool comp(double a , double b)
{
    if (a==b || abs(a-b)<abs(min(a,b))*numeric_limits< double>::epsilon())
        return  a < b;
    else
        return(a < b);
}

float canbachai(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;

    return sqrt(n+canbachai(n-1));
}

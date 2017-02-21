float canbachai(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    else return sqrt(giaithua(n)+canbachai(n-1));
}

int giaithua(int n)
{
    int i,s=1;
    for(i=1;i<=n;i++)
    {
        s*=i;
    }
    return s;
}

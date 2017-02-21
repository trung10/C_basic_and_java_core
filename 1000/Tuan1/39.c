float canbacn(int n)
{

    if(n==1) return 1;
    else return pow((giaithua(n)+canbacn(n-1)),(1/(float)(n+1)));
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

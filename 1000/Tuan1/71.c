float phanso(int n,int x)
{
    if(n==0) return 0;
    else return pow(-1,n)*pow(x,n)/(float)tong(n) +phanso(n-1,x);
}


int tong(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
    {
        s+=i;
    }
    return s;
}


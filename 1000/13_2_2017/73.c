float phanso(int n,int x)
{
    if(n==0) return -1;
    else return pow(-1,n+1)*pow(x,2*n)/(float)giaithua(2*n) +phanso(n-1,x);
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

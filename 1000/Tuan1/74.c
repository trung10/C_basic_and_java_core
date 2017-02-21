float phanso(int n,int x)
{
    if(n==0) return -x;
    else return pow(-1,n+1)*pow(x,2*n+1)/(float)giaithua(2*n+1) +phanso(n-1,x);
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

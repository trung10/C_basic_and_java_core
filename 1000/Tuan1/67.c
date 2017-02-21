int tong(int x,int n)
{
    if(n==0) return 0;
    else return pow(-1,n+1)*pow(x,n)+tong(x,n-1);
}

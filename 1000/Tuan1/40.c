float canbachai(int n,int x)
{
    if(n==0) return 0;
    if(n==1) return sqrt(x);
    else return sqrt(pow(x,n)+canbachai(n-1,x));
}

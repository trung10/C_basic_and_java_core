float canbachai(int n)
{
    if(n==0) return 0;
    if(n==1) return sqrt(2);
    else return sqrt(2+canbachai(n-1));
}

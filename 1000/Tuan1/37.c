float canbacn(int n)
{

    if(n==1) return 0;
    else return pow((n+canbacn(n-1)),(1/(float)(n)));
}


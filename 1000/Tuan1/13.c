int tong(int a, int n){
    if(n < 1)
        return 0;
    return (int) pow(a, 2*n) + tong(a, n - 1);
}



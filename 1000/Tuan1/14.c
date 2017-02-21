int tong(int a, int n){
    if(n < 1)
        return 0;
    return (int) pow(a, 2*n + 1) + tong(a, n - 1);
}



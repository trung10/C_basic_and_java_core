float tong(int n){
    if(n < 0)
        return 0;
    return (float) (n * 2 + 1) / (2*n + 2) + tong(n - 1);
}

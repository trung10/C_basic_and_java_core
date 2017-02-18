float tong(int n){
    if(n < 1)
        return 0;
    return (float) 1 / 2*n + tong(n - 1);
}

float tong(int n){
    if(n < 0)
        return 0;
    return (float) 1 / n*(n + 1) + tong(n - 1);
}


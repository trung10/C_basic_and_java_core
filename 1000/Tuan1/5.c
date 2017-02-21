
float tong(int n){
    if(n < 0)
        return 0;
    return (float) (1 / (2*n + 1)) + tong(n - 1);
}

int tongxmuN(int x, unsigned int n){
    int tong = 0, i;
    for(i = 1; i <= n; i++)
        tong += pow(x, i);
    return tong;
}

float tong(int a, int n){
    if(n < 1)
        return 0;
    return powf(a, (float) n / tong1N(n) ) + tong(a, n - 1);
}

int tong1N(int n){
    if(n < 1)
        return 0;
    return (int) n + tong(n - 1);
}



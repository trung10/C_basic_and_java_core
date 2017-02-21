float tong(int n){
    if(n < 1)
        return 0;
    return (float) 1 / tong1N(n) + tong(n - 1);
}

int tong1N(int n){
    if(n < 1)
        return 0;
    return (int) n + tong(n - 1);
}



float tong(int n){
    if(n < 1)
        return 0;
    return (float) n / (n + 1)+ tong(n - 1);
}


float tong(int x, int n){
    if(n < 0)
        return 1;
    return powf(x, (float) (2*n + 1) / tinhGiaiThua(2*n + 1)) + tong(x, n - 1);
}

int tinhGT(int n){
    if(n < 2)
        return 1;
    return  n * tich(n - 1);
}


float tong(int x, int n){
    if(n < 1)
        return 0;
    return powf(x, (float) n / tinhGiaiThua(n)) + tong(x, n - 1);
}

int tinhGT(int n){
    if(n < 2)
        return 1;
    return  n * tich(n - 1);
}






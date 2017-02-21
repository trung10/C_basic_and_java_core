int tong(int n){
    if(n < 1)
        return 0;
    return tinhGiaiThua(n) + tong(n - 1);
}

int tinhGiaiThua(int n){
    if(n < 2)
        return 1;
    return n * tinhGiaiThua(n - 1);
}

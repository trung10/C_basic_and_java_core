int tich(int n){
    if(n < 2)
        return 1;
    return  n * tich(n - 1);
}


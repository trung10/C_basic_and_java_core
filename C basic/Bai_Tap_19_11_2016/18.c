int kiemtranguyento(int n){
    int i;
    if(n<2){
        return 0;
    }
    for(i=2; i<sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int giaithua(int n){
    int i,j=1;
    if(n<1){
        return 0;
    }
    for(i=1;i<=n;i++){
        j*=i;
    }
    return j;
}
int ckn(int k, int n){
    if(k=>n){
        return 0;
    }
    return giaithua(n)/(giaithua(k)*giaithua(n-k));
}

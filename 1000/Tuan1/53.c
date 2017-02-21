int LN(unsigned int n){
    int dem = n % 10, i = 0;
    while(n > 0){
        if((n % 10) > dem)
            dem = n % 10;
        n /= 10;
    }
    return dem;
}
int demSo(unsigned int n, unsigned int soCanDem){
    int dem = 0;
    while(n > 0){
        if(n % 10 == soCanDem)
            dem++;
        n /= 10;
    }
    return dem;
}

void main(){
    printf("Dem so chu so lon nhat cua 8889 la %d", demSo(8889, LN(8889)));
}

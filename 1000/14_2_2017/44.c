int tongChuSo(unsigned int n){
    if(n > 0){
        return (n % 10) + tongChuSo(n / 10);
    }
    return 0;
}
void main(){
    printf("%d", tongChuSo(7391));
}

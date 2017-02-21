
int ktToanChan(unsigned int n){
    int dem = 0, i = 0;
    while(n > 0){
        if(((n % 10) & 1)) == 0)
            dem++;
        n /= 10;
    }
    return dem;
}
void main(){
    printf("Dem so chu so le cua 8889 la %d", ktToanChan(8889));
}


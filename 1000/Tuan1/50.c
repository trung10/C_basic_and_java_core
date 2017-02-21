void nghichDao(unsigned int n){
    while(n > 0){
        printf("%d", n % 10);
        n /= 10;
    }
}

void main(){
    printf("Nghic dao cua 8889 la ");
    nghichDao(8889);
}

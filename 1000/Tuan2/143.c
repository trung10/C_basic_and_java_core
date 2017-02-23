int timSoChanDauTien(int a[], int n){
    int i;
    int soChan = -1;
    for(i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            soChan = a[i];
            break;
        }
    }
    return soChan;
}

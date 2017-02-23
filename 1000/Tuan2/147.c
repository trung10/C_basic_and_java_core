float timSoDuongCuoiCung(float a[], int n){
    int i;
    float soDuong = -1;
    for(i = n - 1; i >= 0; i--){
        if(a[i] > 0){
            soDuong = a[i];
            break;
        }
    }
    return soDuong;
}

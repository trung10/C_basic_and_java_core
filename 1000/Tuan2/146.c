float timSoAmDauTien(float a[], int n){
    int i;
    float soAm = -1;
    for(i = 0; i < n; i++){
        if(a[i] < 0){
            soAm = a[i];
            break;
        }
    }
    return soAm;
}

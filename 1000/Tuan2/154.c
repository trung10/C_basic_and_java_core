float timViTriSoAmNhoNhat(float a[], int n){
    int i, k;
    float soAm = -1;
    for(i =0; i < n; i++){
        if(a[i] < 0){
            k = i;
            soAm = i;
            break;
        }
    }
    for(i = k + 1; i < n; i++){
        if(a[i] < 0){
            if(a[soAm] > a[i])
                soAm = i;
        }
    }
    return soAm;
}

int timSoChanNhoNhat(int a[], int n){
    int i, k, soChan = -1;
    for(i =0; i < n; i++){
        if(a[i] % 2 == 0){
            k = i;
            soChan = a[i]
            break;
        }
    }
    for(i = k; i < n; i++){
        if(a[i] % 2 == 0){
            if(soChan > a[i])
                soChan = a[i];
        }
    }
    return soDuong;
}

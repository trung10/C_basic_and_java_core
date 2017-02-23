float timGiaTriAmLonNhat(float a[], int n){
        i = 0, k;
        float soAm = -1;
        for(i = 0; i< n; i++){
            if(a[i] < 0){
                k = i;
                soAm = a[i];
                break;
            }
        }
        for(i = k; i< n; i++){
            if(a[i] < 0){
                if(soAm < a[i])
                    soAm = a[i];
            }
        }
        return soAm;

}

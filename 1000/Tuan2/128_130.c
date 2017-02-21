void nhap(float *a){
    int n, i
    printf("Nhap vao so phan tu: ");
    scanf("%d", n);
    for(i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%f", a + i);
    }
}

void xuat(float *a, int n){
   for(i = 0; i < n; i++){
        printf("%3.3f", *(a + i));
    }
}

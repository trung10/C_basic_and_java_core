void nhap(int *a){
    int n, i
    printf("Nhap vao so phan tu: ");
    scanf("%d", n);
    for(i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", a + i);
    }
}

void xuat(int *a, int n){
   for(i = 0; i < n; i++){
        printf("%3d", *(a + i));
    }
}


#include <stdio.h>
#include <malloc.h>

int *a;

void nghichDaoMaTran(int *a, int n, int m)
{

    int i, tam;
    for(i = 0; i< (n * m) / 2; i++)
    {
        *(a + i) += *(a + n * m - i - 1);
        //*(a + i) = *(a + n * m - i - 1);
        *(a + n * m - i - 1) = *(a + i) - *(a + n * m - i - 1);
        *(a + i) -= *(a + n * m - i - 1);;
    }
    //for(i = 0; i < n * m; i++)
        //printf("%d ", *(a + i));
}

void main(){

    int *a, n = 2, m = 3, i, j;
    a = calloc(n * m, sizeof(int));
    for(i = 0; i < n * m; i++){
        *(a + i) = i + 1;
    }
    for(i = 0; i < n ; i++){
        for(j = 0; j < m; j++){
            printf("%d ", *(a + i*m + j));
        }
        printf("\n");
        }
    printf("\n");
    nghichDaoMaTran(a, n, m);
    printf("\n");
    for(i = 0; i < n ; i++){
        for(j = 0; j < m; j++){
            printf("%d ", *(a + i*m + j));
        }
        printf("\n");
        }

}

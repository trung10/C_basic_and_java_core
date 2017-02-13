#include <stdio.h>
#include <malloc.h>

void ThemVaoDauDay(int * daySo, int phanTuThemVao, int soPhanTuCuaDay, int viTri){
    int i;
    if(viTri > 0 && viTri <= soPhanTuCuaDay + 1){
        for(i = soPhanTuCuaDay; i >= viTri - 1; i--){
            *(daySo + i) = *(daySo + i -1);
        }
        *(daySo + viTri - 1) = phanTuThemVao;
    }
}

int Lenght(int * dayso){
    int i = 0;
    while(*(dayso + i))
        i++;
    return i;
}
void main(){
    int *a, i;
    a = malloc(sizeof(int));
    *a = 1;
    *(a + 1) = 5;
    *(a + 2) = 9;
    *(a + 3) = 6;
    printf("_____Truoc khi them______\n");
    for(i = 0; i < 4; i++){
        printf("\t%d", *(a + i));
    }
    printf("\n_____Truoc khi them______\n");
    ThemVaoDauDay(a, 8, 4, 5);
    for(i = 0; i < 9; i++){
        printf("\t%d", *(a + i));
    }
}

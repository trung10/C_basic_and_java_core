#include <stdio.h>

void layMangTuFile(char * file){
    FILE *f;
    f = fopen(file, "r");
    int a[99];
    int i = 0;
    while(1){
        fscanf(f, "%d", &a[i]);
        i++;
        if(getc(f) == EOF)
            break;
    }
    int j;
    for(j = 0; j < i; j++){
        printf("%d ", a[j]);
    }
    fclose(f);
}
void main(){
    layMangTuFile("mang.txt");
}

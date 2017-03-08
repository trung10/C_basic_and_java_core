#include <stdio.h>

void main(){
    FILE *f;
    char kiTu;
    int i = 0;
    f = fopen("f.txt", "r");
    while((kiTu = getc(f)) != EOF){
        if(isspace(kiTu) == 0)
            i++;
    }
    printf("%d", i);
    fclose(f);
}

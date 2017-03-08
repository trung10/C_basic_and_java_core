#include <stdio.h>


void saoChepTapTin(char *tapSaoChep, char *tapTinLuSaoChep){
    FILE *f, *fp;
    f = fopen(tapSaoChep, "r");
    int a;
    fp = fopen(tapTinLuSaoChep, "w");

    while((a = getc(f)) != EOF){
        fprintf(fp, "%c", a);
        //putc(a, fp);
    }
    fclose(f);
    fclose(fp);

}
void main(){
    saoChepTapTin("f.txt", "fp.txt");
}

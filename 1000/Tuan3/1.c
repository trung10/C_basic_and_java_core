#include <stdio.h>
void main()
{
    /*FILE *f;
    char kt;
    f = fopen("f.txt","r");

     while((kt=getc(f))!=EOF)
        printf("%c",kt);

    fclose(f);
    */

    FILE *f;
    char a[255];
    f = fopen("f.txt", "r");
    while(feof(f) == 0){
        fgets(a, 255, (FILE *)f);
        if(feof(f) == 0)
            printf("%s", a);
    }
    fclose(f);
}

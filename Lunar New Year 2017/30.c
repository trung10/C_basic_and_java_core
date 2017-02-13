#include <stdio.h>
#include <string.h>
#include <malloc.h>

void main()
{
    int i=0;
    char *a;
    a = (char *)malloc(50*sizeof(char));
    printf("Nhap chuoi:");
    gets(a);

    while(*(a+i)!= NULL)
    {
        if(isspace(*(a+i))!=0)
        {
            strcpy(a+i,a+i+1);
        }
        i++;
    }

    printf("\nChuoi da xoa dau cach: %s",a);
}

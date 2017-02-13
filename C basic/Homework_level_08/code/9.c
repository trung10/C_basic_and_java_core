#include <stdio.h>
#include <stdlib.h>
void main()
{
    int j,i;
    int *p = malloc(20*sizeof(int));
    printf("\n___Bang cuu chuong___\n");
    for(i=2;i<10;i++)
    {

           for(j=0;j<10;j++)
           {
               *(p+j)=i*(j+1);
           }
           for(j=0;j<10;j++)
        {
            printf("\n%2d*%2d=%2d",i,j+1,*(p+j));
        }
        printf("\n");
    }
    free(p);
}


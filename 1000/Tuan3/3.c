#include <stdio.h>

void chuyenThanhInHoa(char * tenFile){
    FILE *f, *fp;
    char a[255];
    f = fopen(tenFile, "r");
    fp = fopen("tam.txt", "w");
    while(1){
        if(feof(f))
            break;
        fgets(a, 255, f);
        struprr(a);
        if(feof(f) == 0)
            fputs(a, fp);
    }
    fclose(f);
    fclose(fp);
    saoChepTapTin("tam.txt", tenFile);
    remove("tam.txt");
}

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

int main()
{
    chuyenThanhInHoa("f.txt");
	return 0;
}

void struprr(char string[])
{
	int i = 0;

	while (string[i] != '\0')
	{
    	if (string[i] >= 'a' && string[i] <= 'z') {
        	string[i] = string[i] - 32;
    	}
      	i++;
	}
}

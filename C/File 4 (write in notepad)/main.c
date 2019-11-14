#include <stdio.h>
int main()
{
    FILE *fp;
    char c;
    fp=fopen("ac.txt","w");
    do{
        c=getchar();
        putc(c,fp);
    }while(c!='\n');
    fclose(fp);
    return 0;
}

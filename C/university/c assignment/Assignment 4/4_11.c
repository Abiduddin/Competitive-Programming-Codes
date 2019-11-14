#include<stdio.h>
int main()
{
    FILE *fp;

    fp=fopen("TEST.DAT", "w");

    char str[100];

    gets(str);

    fprintf(fp,"%s", str);

    fclose(fp);

    return 0;
}

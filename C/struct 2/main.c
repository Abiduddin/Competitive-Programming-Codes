#include <stdio.h>
struct today
{
    char c_prg[7];
    char dst_m[7];
    char phy[7];
    char stat[7];
    char ce_d[7];
    char eee[7];
    char uris[7];
    char math[7];
};
int main()
{
    struct today a;
    FILE *out;
    out=fopen("data.txt","w");
    printf("Today i read c programming: ");
    gets(a.c_prg);
    printf("Today i read discrete math: ");
    gets(a.dst_m);
    printf("Today i read math: ");
    gets(a.math);
    printf("Today i read EEE: ");
    gets(a.eee);
    printf("Today i read CE: ");
    gets(a.ce_d);
    printf("Today i read PHY: ");
    gets(a.phy);
    printf("Today i read URIS: ");
    gets(a.uris);
    printf("Today i read STAT: ");
    gets(a.stat);
    fprintf(out,"C prg:     %s\nDis math:  %s\nMath:      %s\nEEE:       %s\nCE:        %s\nPHY:       %s\nURIS:      %s\nSTAT:      %s",a.c_prg,a.dst_m,a.math,a.eee,a.ce_d,a.phy,a.uris,a.stat);
    fclose(out);
}

#include <stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("ak.txt","w");
    char c;
    while(scanf("%c",&c)==1){
        putc(c,fp);
    }
    fclose(fp);
    return 0;
}

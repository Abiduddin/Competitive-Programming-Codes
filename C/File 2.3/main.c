#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *p;
    int i;
    char ch;
    if((p=fopen("aaa.txt","r"))==NULL){
        printf("Cannot open file.\n");
        exit(1);
    }
    for(;;){
        if((ch=fgetc(p))==EOF) break;
        putchar(ch);
    }
    fclose(p);
    return 0;
}

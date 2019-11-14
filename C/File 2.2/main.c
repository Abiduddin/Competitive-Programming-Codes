#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *p;
    int i;
    if((p=fopen("aaa.txt","r"))==NULL){
        printf("Cannot open file.\n");
        exit(1);
    }
    for(;;){
        i=fgetc(p);
        if(i==EOF) break;
        putchar(i);
    }
    fclose(p);
    return 0;
}

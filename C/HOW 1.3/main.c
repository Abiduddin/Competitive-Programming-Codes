#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    int i;
    //open file for output
    if((fp=fopen("abid.txt","wb"))==NULL){
        printf("cannot open file.\n");
        exit(1);
    }
    i=100;
    if(fwrite(&i,2,1,fp)!=1){
        printf("Write error occurred.\n");
        exit(1);
    }
    fclose(fp);
    //open file for input
    if((fp=fopen("abid.txt","rb"))==NULL){
        printf("cannot open file.\n");
        exit(1);
    }
    if(fread(&i,2,1,fp)!=1){
        printf("read error occurred.\n");
        exit(1);
    }
    printf("i is %d",i);
    fclose(fp);
    return 0;
}

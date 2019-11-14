//teach yourself page- 282

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    int i;
    //open file for output
    if((fp-fopen("akib.txt","wb"))==NULL){
        printf("cannot open file.\n");
        exit(1);
    }
    i=100;
    if(fwrite(&i,sizeof(int),1,fp)!=1){
        printf("Write error occurred.\n");
        exit(1);
    }
    fclose(fp);
    //open file for input
    if((fp=fopen("akib.txt","rb"))==NULL){
        printf("cannot open file.\n");
        exit(1);
    }
    if(fread(&i,sizeof(1),1,fp)!=1){
        printf("Read error occurred.\n");
        exit(1);
    }
    printf("i is %d",i);
    fclose(fp);
    return 0;

}


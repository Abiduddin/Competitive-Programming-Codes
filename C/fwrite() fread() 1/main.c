#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    double d=12.23,k1;
    int i=101,k2;
    long l=12345L,k3;

    if((fp=fopen("te","wb+"))==NULL){
        printf("Cannot open file.\n");
        exit(1);
    }
    fwrite(&d,sizeof d,1,fp);
    fwrite(&i,sizeof i,1,fp);
    fwrite(&l,sizeof l,1,fp);
    rewind(fp);
    fread(&k1,sizeof k1,1,fp);
    fread(&k2,sizeof k2,1,fp);
    fread(&k3,sizeof k3,1,fp);
    printf("%f %ld %d",k1,k2,k3);
    fclose(fp);
    return 0;
}

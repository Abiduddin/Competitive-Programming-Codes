#include <stdio.h>
#include <conio.h>
#include <process.h>
int main()
{
    char fname[50];
    FILE *fp;
    int a=50,i;
    float b=25.75,j;
    long c=123456,k;
    printf("Enter a file name:");
    gets(fname);
    fp=fopen(fname,"w+");
    if(fp==NULL){
        printf("Cannot open this file....");
        exit(1);

    }
    fwrite(&a,sizeof(int),1,fp);
    fwrite(&b,sizeof(float),1,fp);
    fwrite(&c,sizeof(long),1,fp);
    rewind(fp);
    fread(&i,sizeof(int),1,fp);
    fread(&j,sizeof(float),1,fp);
    fread(&k,sizeof(long),1,fp);
    printf("%d %f %ld",i,j,k);
    //getch();
    fclose(fp);
    return 0;

}

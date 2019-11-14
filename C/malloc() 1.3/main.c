#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    double *p;
    FILE *fp;

    //get memory
    p=malloc(10*sizeof(double));
    if(!p){
        printf("Allocation Error");
        exit(1);
    }
    //generate 10 random numbers
    for(i=0;i<10;i++)
        p[i]=(double) rand();

    if((fp=fopen("myfile2","wb"))==NULL){
        printf("Cannot open file.\n");
        exit(1);
    }
    //write the entire array in one step
    if(fwrite(p,10*sizeof(double),1,fp)!=1){
        printf("Write Error.\n");
        exit(1);
    }
    fclose(fp);
    free(p);      //memory not needed now
    // imagine something transport here

    //get memory again
    p=malloc(10*sizeof(double));
    if(!p){
        printf("Allocation Error");
        exit(1);
    }

    if((fp=fopen("myfile2","rb"))==NULL){
        printf("Cannot open file.\n");
        exit(1);
    }
    if((fread(p,10*sizeof(double),1,fp))!=1){
        printf("Read Error.\n");
        exit(1);
    }
    fclose(fp);
    //display the array
    for(i=0;i<10;i++) printf("%f ",p[i]);
    free(p);

    return 0;
}

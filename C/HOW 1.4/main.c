#include <stdio.h>
#include <stdlib.h>
double d[10]={
    10.23,19.87,1002.23,12.9,0.897,
    11.45,75.34,0.0,1.01,875.875
};
int main()
{
    int i;
    FILE *fp;
    if((fp=fopen("akib.txt","wb"))==NULL){
        printf("cannot open file.\n");
        exit(1);
    }
    //write the entire array in one step
    if(fwrite(d,sizeof d,1,fp)!=1){
        printf("write error.\n");
        exit(1);
    }
    fclose(fp);
    if((fp=fopen("akib.txt","rb"))==NULL){
        printf("cannot open file.\n");
        exit(1);
    }
    //clear the array
    for(i=0;i<10;i++) d[i]=-1.0;

    if(fread(d,sizeof d,1,fp)!=1){
        printf("read error.\n");
        exit(1);
    }
    fclose(fp);
    //display the array
    for(i=0;i<10;i++) printf("%f ",d[i]);

    return 0;
}

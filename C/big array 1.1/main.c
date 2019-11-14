#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

char aa[MAX][2][80];
int nm=0;

void load(void);
void save(void);
void enter(void);
void display(void);

int main()
{
    int i=10;

    load();

    while(i){
        printf(" PRASS \n     1 FOR ENTER DATA\n     2 FOR SEE DATA\n     3 FOR SAVE DATA\n     0 FOR EXIT\n");
        scanf("%d",&i);
        if(i==1)
            enter();
        else if(i==2)
            display();
        else if(i==3)
            save();
    }
    return 0;
}

void display(void)
{
    int i;
    for(i=0;i<nm;i++){
        printf("student no %2d  Name: %15s   Address: %25s\n",i+1,aa[i][0],aa[i][1]);
    }
}

void enter(void)
{
    getchar();
    printf("Enter Student name: ");
    gets(aa[nm][0]);
    printf("Enter Student address: ");
    gets(aa[nm][1]);
    nm++;
}

void save(void)
{
    FILE *fl;
    if((fl=fopen("data","wb"))==NULL){
        printf("FILE DONOT SAVE");
        exit(1);
    }
    if((fwrite(&nm,sizeof nm,1,fl))!=1){
        printf("ERROR 3");
        exit(1);
    }
    if((fwrite(aa,sizeof aa,1,fl))!=1){
        printf("ERROR 4");
        exit(1);
    }
    fclose(fl);
}

void load(void)
{
    FILE *fl;
    if((fl=fopen("data","rb"))==NULL){
        printf("FILE NOT OPEN");
        return;
    }
    if((fread(&nm,sizeof nm,1,fl))!=1){
        printf("ERROR 1. PLEASE CHACK");
        exit(1);
    }
    if((fread(aa,sizeof aa,1,fl))!=1){
        printf("ERROR 2. PLEASE CHACK");
        exit(1);
    }
    fclose(fl);
}

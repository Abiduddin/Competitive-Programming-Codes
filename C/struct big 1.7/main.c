#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

char sub_nm[10][10]={"cse-2301","cse-2302","cse-2303","cse-2304","cse-2305","cse-2306","math-2301","chem-2301","uris-2303","total"};

struct ab
{
    char name[15];
    char id[8];
    float marks[10];

}ak[MAX];

int i=0;

void display_all(void);
void display(int k);
void enter(void);
void student_search(void);
void id_search(void);
float cgpa(int j);
void save(void);
void load(void);
void delete_data(void);
void print_data(void);

int main()
{
    int a;
    load();
    while(1){
        printf("Press   1 for enter information\n\t2 for see all data\n\t3 for Name search\n\t4 for ID search\n\t5 for save data\n\t6 for delete data\n\t7 for print the data\n\t8 for exit\n");
        scanf("%d",&a);
        getchar();
        switch(a)
        {
        case 1:
            enter();
            break;
        case 2:
            display_all();
            break;
        case 3:
            student_search();
            break;
        case 4:
            id_search();
            break;
        case 5:
            save();
            break;
        case 6:
            delete_data();
            break;
        case 7:
            print_data();
            break;
        case 8:
            exit(1);
    }
}
}

void enter(void)
{
    int k,m;
    printf("Enter Name: ");
    gets(ak[i].name);
    printf("Enter ID: ");
    gets(ak[i].id);
    printf("Enter Marks of all subject:\n");
    for(m=0;m<9;m++){
        printf("%10s: ",sub_nm[m]);
        scanf("%d",&k);
        ak[i].marks[m]=cgpa(k);
    }

    ak[i].marks[9]=((ak[i].marks[0]*3+ak[i].marks[1]+ak[i].marks[2]*3+ak[i].marks[3]+ak[i].marks[4]*3+ak[i].marks[5]+ak[i].marks[6]*3+ak[i].marks[7]*3+ak[i].marks[8])/19);
    i++;
}
void display_all(void)
{
    int j,s;
    for(j=0;j<i;j++)
    {
        printf("\nStudent name:%15s\tStudent roll:%8s\n\n",ak[j].name,ak[j].id);
        s=0;
        while(s<10){
            printf("%10s: %.2f\n",sub_nm[s],ak[j].marks[s]);
            s++;
        }
        printf("\n");
    }
}

void display(int k)
{
    int s=0;
    printf("Name: %s\n",ak[k].name);
    printf("ID: %s\n\n",ak[k].id);
    while(s<10){
        printf("%10s: %.2f\n",sub_nm[s],ak[k].marks[s]);
        s++;
    }
    printf("\n\n");
}

void student_search(void)
{
    int t,r=1;
    char st[15];
    printf("Enter Student name: ");
    gets(st);
    for(t=0;t<=i;t++){
        if(!strcmp(st,ak[t].name)){
            r=0;
            display(t);

        }
    }
    if(r)
        printf("\nNot Found.\n");
}

void id_search(void)
{
    int t,r=1;
    char st[8];
    printf("Enter Student ID: ");
    gets(st);
    for(t=0;t<=i;t++){
        if(!strcmp(st,ak[t].id)){
            r=0;
            display(t);

        }
    }
    if(r)
        printf("\nNot Found.\n");
}

float cgpa(int j)
{
    if(j<=100&&j>=80) return 4.00;
    else if(j<=79&&j>=75) return 3.75;
    else if(j<=74&&j>=70) return 3.50;
    else if(j<=69&&j>=65) return 3.50;
    else if(j<=64&&j>=60) return 3.25;
    else if(j<=59&&j>=55) return 3.00;
    else if(j<=54&&j>=50) return 2.75;
    else if(j<=49&&j>=45) return 2.25;
    else if(j<=44&&j>=40) return 2.00;
    else  return 0.00;
}

void load(void)
{
    FILE *fp;
    if((fp=fopen("data","rb"))==NULL){
        printf("There are no save data.\n\n");
        return;
    }
    if(fread(&i,sizeof i,1,fp)!=1){
        printf("Error 1\n");
        exit(1);}

    if(fread(ak,sizeof ak,1,fp)!=1){
        printf("Error 2\n");
        exit(1);}

    fclose(fp);
}

void save(void)
{
    FILE *fp;

    if((fp=fopen("data","wb"))==NULL){
        printf("Error 3\n");
        exit(1);
    }
    if(fwrite(&i,sizeof i,1,fp)!=1){
        printf("Error 4\n");
        exit(1);
    }
    if(fwrite(ak,sizeof ak,1,fp)!=1){
        printf("Error 5\n");
        exit(1);
    }
    fclose(fp);
}

void delete_data(void)
{
    printf("Are you sure? (Y/N)");
    if(toupper(getchar())=='Y'){
        remove("data");
        load();
    }
    return;
}

void print_data(void)
{
    FILE *fp;
    char ab[80];
    int g,s;
    printf("Enter file name(with type,Example: data.txt)\nfile name: ");
    gets(ab);
    if((fp=fopen(ab,"w"))==NULL){
        printf("Error 6\n");
        exit(1);
    }
    for(g=0;g<i;g++){
        fprintf(fp,"\nStudent name:%15s\tStudent roll:%8s\n\n",ak[g].name,ak[g].id);
        s=0;
        while(s<10){
            fprintf(fp,"%10s: %.2f\n",sub_nm[s],ak[g].marks[s]);
            s++;
        }
        printf("\n");
    }
    fclose(fp);
}

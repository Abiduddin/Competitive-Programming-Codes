#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

struct kk
{
    float cse2301;
    float cse2302;
    float cse2303;
    float cse2304;
    float cse2305;
    float cse2306;
    float math2301;
    float chem2301;
    float uris2303;
    float total;
};

struct ab
{
    char name[15];
    char id[8];
    struct kk marks;

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

        switch(a)
        {
        case 1:
            getchar();
            enter();
            break;
        case 2:
            getchar();
            display_all();
            break;
        case 3:
            getchar();
            student_search();
            break;
        case 4:
            getchar();
            id_search();
            break;
        case 5:
            getchar();
            save();
            break;
        case 6:
            getchar();
            delete_data();
            break;
        case 7:
            getchar();
            print_data();
            break;
        case 8:
            exit(1);

    }
}
}

void enter(void)
{
    //getchar();
    int k;
    printf("Enter Name: ");
    gets(ak[i].name);
    printf("Enter ID: ");
    gets(ak[i].id);
    printf("Enter Marks of all subject.\n");
    printf("cse-2301: ");
    scanf("%d",&k);
    ak[i].marks.cse2301=cgpa(k);
    printf("cse-2302: ");
    scanf("%d",&k);
    ak[i].marks.cse2302=cgpa(k);
    printf("cse-2303: ");
    scanf("%d",&k);
    ak[i].marks.cse2303=cgpa(k);
    printf("cse-2304: ");
    scanf("%d",&k);
    ak[i].marks.cse2304=cgpa(k);
    printf("cse-2305: ");
    scanf("%d",&k);
    ak[i].marks.cse2305=cgpa(k);
    printf("cse-2306: ");
    scanf("%d",&k);
    ak[i].marks.cse2306=cgpa(k);
    printf("chem-2301: ");
    scanf("%d",&k);
    ak[i].marks.chem2301=cgpa(k);
    printf("math-2301: ");
    scanf("%d",&k);
    ak[i].marks.math2301=cgpa(k);
    printf("uris-2303: ");
    scanf("%d",&k);
    ak[i].marks.uris2303=cgpa(k);
    ak[i].marks.total=((ak[i].marks.cse2301*3+ak[i].marks.cse2302+ak[i].marks.cse2303*3+ak[i].marks.cse2304+ak[i].marks.cse2305*3+ak[i].marks.cse2306+ak[i].marks.chem2301*3+ak[i].marks.math2301*3+ak[i].marks.uris2303)/19);
    i++;
}
void display_all(void)
{
    int j;
    for(j=0;j<i;j++)
    {
        printf("Student name: %15s\tStudent roll: %8s\n",ak[j].name,ak[j].id);
        printf("cse-2301: %.2f\n",ak[j].marks.cse2301);
        printf("cse-2302: %.2f\n",ak[j].marks.cse2302);
        printf("cse-2303: %.2f\n",ak[j].marks.cse2303);
        printf("cse-2304: %.2f\n",ak[j].marks.cse2304);
        printf("cse-2305: %.2f\n",ak[j].marks.cse2305);
        printf("cse-2306: %.2f\n",ak[j].marks.cse2306);
        printf("chem-2301: %.2f\n",ak[j].marks.chem2301);
        printf("math-2301: %.2f\n",ak[j].marks.math2301);
        printf("uris-2303: %.2f\n\n",ak[j].marks.uris2303);
        printf("Total CGPA: %.2f\n\n\n",ak[j].marks.total);
    }

}

void display(int k)
{
    printf("Name: %s\n",ak[k].name);
    printf("ID: %s\n\n",ak[k].id);
    printf("cse-2301: %.2f\n",ak[k].marks.cse2301);
    printf("cse-2302: %.2f\n",ak[k].marks.cse2302);
    printf("cse-2303: %.2f\n",ak[k].marks.cse2303);
    printf("cse-2304: %.2f\n",ak[k].marks.cse2304);
    printf("cse-2305: %.2f\n",ak[k].marks.cse2305);
    printf("cse-2306: %.2f\n",ak[k].marks.cse2306);
    printf("chem-2301: %.2f\n",ak[k].marks.chem2301);
    printf("math-2301: %.2f\n",ak[k].marks.math2301);
    printf("uris-2303: %.2f\n\n",ak[k].marks.uris2303);
    printf("Total CGPA: %.2f\n\n",ak[k].marks.total);
}

void student_search(void)
{
    getchar();
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
    getchar();
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
    int g;
    printf("Enter file name(with type,Example: data.txt)\nfile name: ");
    gets(ab);
    if((fp=fopen(ab,"w"))==NULL){
        printf("Error 6\n");
        exit(1);
    }
    for(g=0;g<i;g++){
        fprintf(fp,"Student name: %15s\tStudent roll: %8s\n",ak[g].name,ak[g].id);
        fprintf(fp,"cse-2301: %.2f\n",ak[g].marks.cse2301);
        fprintf(fp,"cse-2302: %.2f\n",ak[g].marks.cse2302);
        fprintf(fp,"cse-2303: %.2f\n",ak[g].marks.cse2303);
        fprintf(fp,"cse-2304: %.2f\n",ak[g].marks.cse2304);
        fprintf(fp,"cse-2305: %.2f\n",ak[g].marks.cse2305);
        fprintf(fp,"cse-2306: %.2f\n",ak[g].marks.cse2306);
        fprintf(fp,"chem-2301: %.2f\n",ak[g].marks.chem2301);
        fprintf(fp,"math-2301: %.2f\n",ak[g].marks.math2301);
        fprintf(fp,"uris-2303: %.2f\n\n",ak[g].marks.uris2303);
        fprintf(fp,"Total CGPA: %.2f\n\n\n",ak[g].marks.total);
    }
    fclose(fp);


}

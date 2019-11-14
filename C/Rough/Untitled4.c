#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char sub_nm[10][10]={"cse-2301","cse-2302","cse-2303","cse-2304","cse-2305","cse-2306","math-2301","chem-2301","uris-2303","total"};

struct ab
{
    char name[15];
    char id[8];
    float marks[10];

}ak[100];

int i=0;

void display_all(void);
void display(int k);
void enter(void);
void student_search(void);
void id_search(void);
float cgpa(int j);

int main()
{
    int a;

while(1){
    printf("Press   1 for enter information\n\t2 for see all data\n\t3 for Name search\n\t4 for ID search\n\t5 for exit\n");
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

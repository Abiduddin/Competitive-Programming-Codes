#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
    j=i;
    while(j--)
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
        printf("Total CGPA: %.2f\n\n",ak[j].marks.total);
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
    //getchar();
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
    //getchar();
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
    else if(j<=39&&j>=0) return 0.00;
}

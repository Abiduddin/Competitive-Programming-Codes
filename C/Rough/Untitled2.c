#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
struct date{
    int day;
    int month;
    int year;
    };
struct info{
    char name[25];
    char matric[8];
    char department[10];
    int tution;
    int paid;
    int dues;
    struct date registration;
    };
void main()
{
    struct info student[100];
    int i;
    printf("\t\t\t  Student's Information\n");
    printf("\t\t\t-------------------------\n");
    printf("\n[open an existing file containing student's information]\n\n");
    FILE *fp;
    char *f_name,choice;
    while(1){
        printf("Enter a file name to open: ");
        scanf("%s",f_name);
        fp=fopen(f_name,"r");
        if(fp==NULL){
            printf("This file does not exist.\n");
            printf("Try again with another file name?:");
            choice=getch();
            if(choice=='n')
                exit(0);

        }
        else{
            fread(&student,sizeof(student),1,fp);
            fclose(fp);
            break;
        }
    }
    printf("\nStudent information\n\n");
    printf("Name   Matric    Department   Registration    Dues\n");
    printf("-------------------------------------------------------\n");
    i=0;
    while(strcmp(student[i].name,"end")!=0){
        printf("%-15s",student[i].name);
        printf("%-10s",student[i].matric);
        printf("%-10s",student[i].department);
        printf("%d/%d/%d",student[i].registration.day,student[i].registration.month,student[i].registration.year);
        printf("%10d",student[i].dues);
        i++;
        printf("\n");
    }
    getch();
}

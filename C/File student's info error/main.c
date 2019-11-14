#include <stdio.h>
#include <string.h>
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
    printf("\t\t\t\    Student's Information\n");
    printf("\t\t\t\-----------------------------\n");
    printf("\n[Creating a list of student's information]\n\n");
    i=0;
    while(1){
        printf("Enter student's name [or 'end' to stop]:");
        scanf("%s",student[i].name);
        if(strcmp(student[i].name,"end")==0)
            break;
        printf("Matric no. :");
        scanf("%s",student[i].matric);
        printf("Department :");
        scanf("%s",student[i].department);
        printf("Tuition fees :");
        scanf("%d",&student[i].tution);
        printf("Paid :");
        scanf("%d",&student[i].paid);
        printf("Registration date [1 to 31]:");
        scanf("%d",&student[i].registration.day);
        printf("            month [1 to 12]:");
        scanf("%d",&student[i].registration.month);
        printf("                      year :");
        scanf("%d",&student[i].registration.year);
        student[i].dues=student[i].tution-student[i].paid;
        i++;
        printf("\n");
    }
    FILE *fp;
    char *f_name,choice;
    int end=0;
    do{
        printf("Enter a file name with path:");
        scanf("%s",f_name);
        fp=fopen(f_name,"r");
        if(fp==NULL){
            fp=fopen(f_name,"w");
            fwrite(&student,sizeof(student),1,fp);
            fclose(fp);
            end=1;
            printf("A new file has been created successfully.");
            printf("Press any key to exit........");
           // getch();
        }
        else{
            printf("This file already exits.Overwrite it? :");
            choice=getch();
            if(choice=='y'){
                fp=fopen(f_name,"w");
                fwrite(&student,sizeof(student),1,fp);
                fclose(fp);
                end=1;
                printf("A new file has been created successfully.");
                printf("Press any key to exit.......");
                //getch();
            }
            else
                printf("\nEnter another file name: \n");
        }
    }while(!end);
}

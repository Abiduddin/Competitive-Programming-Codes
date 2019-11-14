#include <stdio.h>
#include <string.h>
struct date
{
    int day;
    int month;
    int year;
};
struct student_information
{
    char name[25];
    long int matric;
    int semester;
    struct date registration;
};
struct student_information student[100];
int main()
{
    int i,c,found=0;
    printf("Enter name of student[ or 'end' when finish]");
    printf("---------------------------------------------\n");
    for(i=0;;i++){
        printf("Enter your name: ");
        scanf("%[^\n]",student[i].name);
        if(strcmp(student[i].name,"end")==0)
            break;
        printf("    matric:");
        scanf("%ld",&student[i].matric);
        printf("    semester:");
        scanf("%d",&student[i].semester);
        printf("    Reg day [1...31]:");
        scanf("%d",&student[i].registration.day);
        printf("    Reg month [1..12]:");
        scanf("%d",&student[i].registration.month);
        printf("    Reg year :");
        scanf("%d",&student[i].registration.year);

    }
    char search_name[25];
    printf("\nEnter a name to search: ");
    scanf("%[^\n]",search_name);
    for(c=0;c<i;c++){
        if(strcmp(search_name,student[c].name)==0){
            printf("\nItem is found.\n");
            printf("Name: %s\n",student[c].name);
            printf("Matric: %ld\n",student[c].matric);
            printf("Semester: %d\n",student[c].semester);
            printf("Registration : %d/%d/%d",student[c].registration.day,student[c].registration.month,student[c].registration.year);
            found=1;
            break;
        }
    }
    if(found==0)
        printf("Item not found.");
}

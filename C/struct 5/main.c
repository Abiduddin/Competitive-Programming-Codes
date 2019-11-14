#include <stdio.h>
#include <string.h>
struct info
{
    char name[25];
    char dept[5];
    int semester;
};
struct info student[]={
    "Tipu","CSE",7,
    "Shafiq","CSE",8,
    "Sabbir","BBA",4,
    "Sazib","QSIS",6,
    "Jewel","BBA",9

};
int main()
{
    int i,j;
    char temp_name[25];
    char temp_dept[5];
    int temp_semester;
    for(i=0;i<5;i++)
        for(j=i+1;j<5;j++)
    if(strcmp(student[i].name,student[j].name)>0){
            //interchange name
        strcpy(temp_name,student[i].name);
        strcpy(student[i].name,student[j].name);
        strcpy(student[j].name,temp_name);
           //interchange department
        strcpy(temp_dept,student[i].dept);
        strcpy(student[i].dept,student[j].dept);
        strcpy(student[j].dept,temp_dept);
           //interchange semester
        temp_semester=student[i].semester;
        student[i].semester=student[j].semester;
        student[j].semester=temp_semester;
    }
    printf("\nReordered list : \n\n");
    printf("Name         Department      semester\n");
    printf("-------------------------------------\n");
    for(i=0;i<5;i++)
        printf("%-15s%-10s%10d\n",student[i].name,student[i].dept,student[i].semester);
}

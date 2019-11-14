#include <stdio.h>
struct info
{
    char name[20];
    int age;
    char dept[5];
};
int main()
{
    struct info s1,*s2;
    printf("Enter a name: ");
    scanf("%s",s1.name);
    printf("Enter age: ");
    scanf("%d",&s1.age);
    printf("Enter department: ");
    scanf("%s",s1.dept);
    s2=&s1;
    printf("\n\nInformation of student s1: \n");
    printf("Name : %s\n",s1.name);
    printf("Age : %d\n",s1.age);
    printf("Dept : %s\n",s1.dept);
    printf("Information of student s2: \n");
    printf("Name : %s\n",s2->name);
    printf("Age : %d\n",s2->age);
    printf("Dept : %s\n",s2->dept);
    strcpy(s2->name,"Mohiuddin");
    printf("Name of student s1 : %s\n",s1.name);
    printf("Name of student s2 : %s\n",s2->name);
    strcpy(s1.name,"Jahangir");
    printf("Name of student s1 : %s\n",s1.name);
    printf("Name of student s2 : %s",s2->name);
}

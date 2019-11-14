#include <stdio.h>
struct st
{
    char name[20];
    int roll;
    float marks;
};
int main()
{
    struct st stu[100];
    int i,n;
    printf("How many student? ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter name of student : \n");
        scanf("%s",stu[i].name);
        printf("Enter roll: \n");
        scanf("%d",&stu[i].roll);
        printf("Enter marks: \n");
        scanf("%f",&stu[i].marks);
    }
    printf("print your information: \n");
    for(i=0;i<n;i++){
        printf("Roll : %d\n",stu[i].roll);
        //puts(stu[i].name);
        printf("Name : %s\n",stu[i].name);
        printf("Marks : %f\n",stu[i].marks);
    }

}

#include <stdio.h>
struct info
{
    char name[20];
    char desig[10];
    int salary;
    int paid;
    int dues;

};
int main()
{
    struct info employee[10];
    int find_dues(int salary,int pay);
    int find_total_dues(int add_due);
    int n,j,due;
    printf("How many employees? : ");
    scanf("%d",&n);
    for(j=0;j<n;j++){
        printf("Enter name of employee %d : ",j+1);
        scanf("%s",employee[j].name);
        printf("              designation : ");
        scanf("%s",employee[j].desig);
        printf("                    salary: ");
        scanf("%d",&employee[j].salary);
        printf("                      paid: ");
        scanf("%d",&employee[j].paid);
        employee[j].dues=find_dues(employee[j].salary,employee[j].paid);
    }
    for(j=0;j<n;j++)
        due=find_total_dues(employee[j].dues);

    printf("Employee information: \n");
    printf("-------------------------\n");
    for(j=0;j<n;j++){
        printf("Name %d: %s\n",j+1,employee[j].name);
        printf("Desig : %s\n",employee[j].desig);
        printf("Salary: %d\n",employee[j].salary);
        printf("Paid: %d\n",employee[j].paid);
        printf("Dues: %d\n",employee[j].dues);
    }
    printf("Total dues: %d",due);
}
int find_dues(int salary,int pay)
{
    int dues;
    dues=salary-pay;
    return(dues);
}
int find_total_dues(int add_due)
{
    static int total_dues=0;
    total_dues=total_dues +add_due;
    return(total_dues);
}


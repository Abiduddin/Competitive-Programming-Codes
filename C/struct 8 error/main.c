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
    struct info employee;
    int find_dues(struct info *employe);
    printf("Enter name of employee: ");
    scanf("%s",employee.name);
    printf("           designation: ");
    scanf("%s",employee.desig);
    printf("                salary: ");
    scanf("%d",&employee.salary);
    printf("                  paid: ");
    scanf("%d",&employee.paid);
    int find_dues(employee);
    printf("Employee information: \n");
    printf("------------------------\n");
    printf("Name : %s\n",employee.name);
    printf("Designation : %s\n",employee.desig);
    printf("Salary : %d\n",employee.salary);
    printf("Paid : %d\n",employee.paid);
    printf("Dues : %d\n",employee.dues);
}
int find_dues(struct information *employe)
{
    employee->dues=employee->salary-employee->paid;
}

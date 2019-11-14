#include<stdio.h>
#define N 2


struct member
{
    char name[100];
    int age;
    char deg[100];
    char occ[100];
    double salary;
};
int main()
{
    struct member m[N];
    int i;

    for(i=0; i<N; i++)
    {
        printf("Input data for members %d\n", i+1);
        scanf("%s%d%s%s%lf", m[i].name, &m[i].age, m[i].deg, m[i].occ, &m[i].salary);
        printf("\n");
    }

    printf("\n");

    for(i=0; i<N; i++)
    {
        printf("Information of members %d\n", i+1);
        printf("Name: %s\n", m[i].name);
        printf("Age: %d\n", m[i].age);
        printf("DEgree: %s\n", m[i].deg);
        printf("Occupation: %s\n", m[i].occ);
        printf("Salary: %f\n", m[i].salary);
        printf("\n");
    }

    return 0;

}


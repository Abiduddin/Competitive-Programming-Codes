#include <stdio.h>
struct info
{
    char name[20];
    char matric_no[10];
    char dept[5];
    char address[50];
};
int main()
{
    FILE *out;
    out=fopen("index.txt","w");
    struct info a;
    printf("Your name: ");
    gets(a.name);
    printf("Your matric no: ");
    gets(a.matric_no);
    printf("Your dept: ");
    gets(a.dept);
    printf("Your address: ");
    gets(a.address);
    printf("\n\n\n");
    fprintf(out,"Your name:        %s\nYour matric no:   %s\nYour dept:        %s\nYour address:     %s",a.name,a.matric_no,a.dept,a.address);
    fclose(out);
    return 0;

}

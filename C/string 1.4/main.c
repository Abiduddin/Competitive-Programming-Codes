#include <conio.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j=0;
    char name[10][50];
    printf("How many string?: ");
    scanf("%d",&n);
    getchar();
    printf("Enter %d string:\n",n);
    for(i=0;i<n;i++)
        gets(name[i]);
    printf("String in same order\n");
    for(i=0;i<n;i++)
        puts(name[i]);
    printf("\nString in reverse order\n");
    for(i=n-1;i>=0;i--)
        puts(name[i]);
}

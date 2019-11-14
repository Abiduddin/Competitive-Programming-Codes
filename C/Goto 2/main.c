#include <stdio.h>
int main()
{
    int i,j;
    p:printf("Enter your number: ");
    scanf("%d",&i);
    s:i=i+5;
    if(i>=0&&i<=10){
        printf("NOT WORKING\n");
        goto p;
    }
    else if(i>=11&&i<=30){
        printf("WORKING\n");
        goto s;
    }
    else
        printf("DONE");

    return 0;
}

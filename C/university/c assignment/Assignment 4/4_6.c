#include<stdio.h>
#include<string.h>

int main()
{
    char str[80];
    int i,n;

    while(gets(str))
    {
        n = strlen(str);
        for(i = 1; i < n; i++)
        {
            printf("%c",str[i]);
        }
        printf("%ca",str[0]);
        printf("\n");
    }
    return 0;
}


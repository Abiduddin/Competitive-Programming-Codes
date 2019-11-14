#include<stdio.h>
#include<string.h>

int main()
{
    char str1[80],str2[80];
    int c,i;

    printf("Enter a string:\n");
    gets(str1);

    c = strlen(str1) - 1;

    for(i = 0; i <= c; i++)
    {
        str2[i] = str1[i];
    }

    str2[i] = '\0';

    printf("String 2 is %s\n", str2);

    return 0;
}


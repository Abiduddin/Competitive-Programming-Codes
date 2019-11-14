#include<stdio.h>
#include<string.h>

int main()
{
    char str1[80],str2[80];
    int c1,c2,i;

    printf("Enter a string:\n");
    gets(str1);

    c1 = strlen(str1);

    printf("Enter another string:\n");
    gets(str2);

    c2 = strlen(str2);

    for(i = 0; i < c2; i++)
    {
        str1[c1 + i] = str2[i];
    }
    str1[c1 + c2] = '\0';

    printf("%s\n", str1);

    return 0;
}

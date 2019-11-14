#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    int c;
    printf("Enter a string:\n");
    gets(str1);
    printf("Enter another string:\n");
    gets(str2);

    c = strcmp(str1, str2);

    if(c < 0)
        printf("Second string is larger than first string.\n");

    else if(c > 0)
        printf("First string is larger than second string.\n");

    else
        printf("Both string are equal.\n");

    return 0;
}

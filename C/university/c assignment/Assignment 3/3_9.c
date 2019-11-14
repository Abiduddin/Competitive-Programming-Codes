#include<stdio.h>
#include<string.h>

int main()
{
    int letter, i;
    char str[100];

    gets(str);
    letter = strlen(str);

    for(i=0; i<letter; i++)
    {
        if((str[i] >= '0' && str[i] < '9') || (str[i] >= 'A' && str[i] < 'Z') || (str[i] >= 'a' && str[i] < 'z'))
            putchar(str[i] +1);
        else if(str[i] == '9')
            putchar('0');
        else if(str[i] == 'z')
            putchar('a');
        else if(str[i] == 'Z')
            putchar('A');
        else
            putchar('.');
    }
    return 0;
}

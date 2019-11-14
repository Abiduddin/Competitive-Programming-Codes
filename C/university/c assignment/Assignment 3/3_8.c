#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char letter[80];
    int tag, c;

    gets(letter);
    tag=strlen(letter);

    for(c=0; c<tag; c++)
    {
        if(islower(letter[c]))
            putchar(toupper(letter[c]));
        else
            putchar(tolower(letter[c]));
    }

    return 0;
}



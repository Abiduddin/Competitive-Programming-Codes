#include <stdio.h>
#include <string.h>

int main()
{
    char ab[30]="HELLO";
    printf("String before strrev(): %s\n",ab);
    printf("String after strrev(): %s\n",strrev(ab));
    return 0;
}

#include <stdio.h>
int main()
{
    char s[]="man";
    printf("%c%c%c",*(s),*(s+1),*(s+2));
}
/* its work in address of variable *s , *(s+1)

*/

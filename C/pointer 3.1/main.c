#include <stdio.h>
#include <stdlib.h>

void pr_reverse(char *s);

int main()
{
    pr_reverse("i like C++");
    return 0;

}
void pr_reverse(char *s)
{
    register int t;
    for(t=strlen(s)-1;t>=0;t--)
        putchar(s[t]);
}

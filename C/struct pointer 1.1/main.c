#include <stdio.h>
#include <string.h>

struct s_type
{
    int i;
    char str[80];

}s,*p;

int main()
{
    p=&s;
    s.i=10;
    p->i=10;
    strcpy(p->str,"I like structure.");
    printf("%d %d %s",s.i,p->i,p->str);

    return 0;
}
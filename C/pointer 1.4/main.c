#include <stdio.h>
int main()
{
    int *p,q;
    p=&q;
    q=1;
    printf("%p",p);
    *p++;
    printf("\n%d %p",q,p);
    return 0;
}
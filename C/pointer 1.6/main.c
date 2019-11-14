#include <stdio.h>
int main()
{
    int *p,q;
    p=&q;
    q=1;
    printf("%p\n",p);
    (*p)++;// now q is incremented and p is unchanged.
    printf("%d %p %d",q,p,*p);
    return 0;
}

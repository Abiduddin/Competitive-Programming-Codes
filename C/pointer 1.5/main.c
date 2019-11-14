#include <stdio.h>
int main()
{
    int *p,q;
    p=&q;
    *p=11;
    printf("*p=%d q=%d\n",*p,q);
    q=22;
    printf("*p=%d q=%d\n",*p,q);
    *p++;// this will not increment.

    printf("*p=%d q=%d\n",*p,q);
    q++;
    printf("*p=%d q=%d\n",*p,q);
    q=44;
    printf("*p=%d q=%d\n",*p,q);
    p=&q;
    printf("*p=%d q=%d\n",*p,q);
    return 0;
}

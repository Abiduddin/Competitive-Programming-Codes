#include <stdio.h>
int main()
{
    int *p,q=3;
    p=&q;
    printf("p=%d q=%d\n",*p,q);
    (*p)++;
    printf("p=%d q=%d\n",*p,q);
    *p=*p+3;
    printf("p=%d q=%d\n",*p,q);

}

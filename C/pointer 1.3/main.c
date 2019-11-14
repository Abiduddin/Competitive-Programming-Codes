#include <stdio.h>
int main()
{
    int i=24,*p=&i,**q=&p;
    printf("\ni=%d",i);
    printf("\n&i=%d",&i);

    printf("\n\nP=%d",p);
    printf("\n*p=%d",*p);
    printf("\n&p=%d",&p);

    printf("\n\nq=%d",q);
    printf("\n*q=%d",*q);
    printf("\n**q=%d",**q);
    printf("\n&q=%d",&q);

    i=20;
    printf("\n**q=%d",**q);
    *p=200;
    printf("\n**q=%d",**q);
    return 0;
}

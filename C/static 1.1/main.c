#include <stdio.h>

void f(void);

int main()
{
    f();
    return 0;
}

void f(void)
{
    static int stop=0;
    stop++;
    if(stop==10) return;
    printf("%d ",stop);
    f();
}

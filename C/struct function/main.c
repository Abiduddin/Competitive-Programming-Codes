#include <stdio.h>

struct st1 {
    int a,b;
    char ch;
};

void f1(struct st1 parm);
int main()
{
struct st1 arg;

arg.a=1000;
f1(arg);
return 0;
}

void f1(struct st1 parm)
{
    printf("%d ",parm.a);
}

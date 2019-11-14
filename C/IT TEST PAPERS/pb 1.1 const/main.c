#include <stdio.h>
int main()
{
    int const a=10;
    /*
    const a=10;
    isn't change , like
    a=a+10; after declare a;

    but printf("a is %d",a*3 or a+3 or a/3 or a-3 work)
    but not printf("a is %d",a=a*3 or a=anything cannot work)
    */
    printf("a is %d ",a*3);
}

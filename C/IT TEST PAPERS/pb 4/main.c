#include <stdio.h>
int main()
{
    static int var = 5;
    printf("%d",var--);
    if(var)
        main();
}
/*
if write same code without static , like
#include <stdio.h>
int main()
{
    int var=5;
    printf("%d",var--);
    if (var)
        main();
}
 that does not work...

 When static storage class is given, it is initialized once. The change in the
 value of a static variable is retained even between the function calls. Main is also treated like
 any other ordinary function, which can be called recursively.
 */

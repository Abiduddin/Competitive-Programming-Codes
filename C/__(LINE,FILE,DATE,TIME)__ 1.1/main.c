
#include <stdio.h>

int main()
{
    printf("Compiling %s, line %d, on %s, at %s",__FILE__,__LINE__,__DATE__,__TIME__);
    return 0;
}

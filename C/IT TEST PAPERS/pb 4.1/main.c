#include <stdio.h>
int main()
{
    static int var=5;
    printf("%d ",var--);
    if(var==-100)
        exit(1);
    //if(var)
    main();
}

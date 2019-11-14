#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p;
    long l=0;
    //l=0;
    do{
        p=malloc(1000);
        if(p) l+=1000;
    }while(p);
    printf("Approximately %d bytes of free memory.",l);

    return 0;
}

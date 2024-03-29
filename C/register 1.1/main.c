#include <stdio.h>
#include <time.h>

int i;    //this will not be transformed into a register variable because it is global

int main()
{
    register int j;

    int k;
    clock_t start, finish;

    start =clock();
    for(k=0;k<100;k++)
        for(i=0;i<32000;i++);
    finish=clock();
    printf("Non-register loop: %ld ticks\n",finish-start);

    start=clock();
    for(k=0;k<100;k++)
        for(j=0;j<32000;j++);
    finish=clock();
    printf("Register loop: %ld ticks\n",finish-start);

    return 0;
}

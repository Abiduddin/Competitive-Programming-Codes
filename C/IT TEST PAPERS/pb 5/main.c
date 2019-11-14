#include <stdio.h>
int main()
{
    int c[]={2,8,3,4,4,6,7,5};
    int j,*p=c,*q=c;
    for(j=0;j<8;j++){
        printf("%d",*c);
        ++q;
    }
    printf("\n");
    for(j=0;j<8;j++){
        printf("%d",*p);
        ++p;
    }
}
/*
Initially pointer c is assigned to both p and q. In the first loop, since only q is
incremented and not c , the value 2 will be printed 5 times. In second loop p itself is
incremented. So the values 2 3 4 6 5 will be printed.
*/

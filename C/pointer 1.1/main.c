#include <stdio.h>
int main()
{
    int i,*pv;
    i=4;
    pv=&i;
    printf("\nValue of i = %d",i);
    printf("\nAddress of i = %d",&i);
    printf("\n\nValue of pv = %d",pv);
    printf("\nValue pointed by pv = %d",*pv);
    printf("\nAddress of pv = %d",&pv);
    return 0;
}

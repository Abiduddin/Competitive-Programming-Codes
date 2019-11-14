#include <stdio.h>
#include <memory.h>

int main()
{
    int a[30],i;

    memset(a,0,sizeof(a)); /// it only assign 0 or -1

    for(i=0;i<30;i++)
        printf("%d id %d\n",i+1,a[i]);

    memset(a,-1,sizeof(a));
    for(i=0;i<30;i++)
        printf("%d id %d\n",i+1,a[i]);
    return 0;
}

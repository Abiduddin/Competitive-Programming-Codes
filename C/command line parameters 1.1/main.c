#include <stdio.h>
int main(int abid, char *akash[])
{
    int count;
    printf("abid = %d\n",abid);
    for(count=0;count<abid;++count)
        printf("akash[%d] = %s\n",count,akash[count]);
    return 0;
}

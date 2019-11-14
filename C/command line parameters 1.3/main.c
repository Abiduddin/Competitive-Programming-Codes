#include <stdio.h>
int main(int abid, char *akash[])
{
    int count;
    abid=3;
    akash[0]="command line parameters 1.3";
    akash[1]="abid";
    akash[2]="akash";
    printf("abid = %d\n",abid);
    for(count=0;count<abid;++count)
        printf("akash[%d] = %s\n",count,akash[count]);
    return 0;
}

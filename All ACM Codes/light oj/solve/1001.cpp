#include <stdio.h>

int main()
{
    int k,l;

    scanf("%d",&l);
    while(l--)
    {
        scanf("%d",&k);
        if(k<=10)
            printf("%d 0\n",k);
        else
            printf("10 %d\n",k-10);
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int i,l;

    while(1)
    {
        l=0;
        scanf("%d",&i);
        if(i==0)
            break;
        else
        {
            for( ;i>0;i--)
                l=l+i*i;
            printf("%d\n",l);
        }
    }
    return 0;
}

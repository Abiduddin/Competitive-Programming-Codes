#include <stdio.h>
#include <string.h>



int main()
{
    int i,j,t,l;
    char a[110][110],b[17][10]={"Happy","birthday", "to", "you", "Happy", "birthday" ,"to" ,"you", "Happy" ,"birthday" ,"to" ,"Rujia", "Happy", "birthday", "to", "you"};

    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        gets(a[i]);
    }
    l=t;

    j=0;

    while(1)
    {
        for(i=0;i<16;i++,j++)
        {
            printf("%s: %s\n",a[j],b[i]);
            if(j==(l-1))
            {
                j=-1;
            }
        }
        t=t-16;
        if(t<=0)
            break;
    }
    return 0;
}

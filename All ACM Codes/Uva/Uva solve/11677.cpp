#include <cstdio>

int main()
{
    int i,j,h1,h2,m1,m2;

    while(1)
    {
        scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
        if(h1==0&&h2==0&&m1==0&&m2==0)
        {
            break;
        }
        else
        {
            i=(h1*60+m1);
            j=(h2*60+m2);
            if(i>j)
            {
                printf("%d\n",((24-(h1-h2))*60-(m1-m2)));
            }
            else
            printf("%d\n",j-i);
        }
    }
    return 0;
}

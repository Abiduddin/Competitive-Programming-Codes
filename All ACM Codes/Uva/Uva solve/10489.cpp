#include <stdio.h>
int main()
{
    //freopen("aa.txt","r",stdin);
    int m1,m2,b,c,f,cb,x;
    scanf("%d",&c);
    while(c--)
    {
        scanf("%d %d",&f,&b);
        m1 = 0;
        while(b--)
        {
            m2 = 1;
            scanf("%d",&cb);
            while(cb--)
            {
                scanf("%d",&x);
                m2 = (m2*x)%f;
            }
            m1 = (m1 + m2)%f;
        }
        printf("%d\n",m1);
    }
    return 0;
}

#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    register int t;
    int i,j,k;
    char a[6];
    scanf("%d",&t);

    while(t--)
    {
        getchar();
        scanf("%c%c%c-%d",&a[0],&a[1],&a[2],&k);
        j=(a[0]-65)*676+(a[1]-65)*26+(a[2]-65);
        if(k<j)
        {
            i=k;
            k=j;
            j=i;
        }
        if((k-j)<=100)
            printf("nice\n");
        else
            printf("not nice\n");
    }
}

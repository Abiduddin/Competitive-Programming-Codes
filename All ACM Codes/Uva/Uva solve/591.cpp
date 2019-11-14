#include <cstdio>

int main()
{
    int i,j,k=0,l=0,a[1000],m,n=0;
    while(1)
    {
        n=0;
        //l=0;
        k=0;
        m=0;
        scanf("%d",&i);
        if(i==0)
            break;
        else
        {
            for(j=0;j<i;j++){
                scanf("%d",&a[j]);
                k+=a[j];
            }
            m=(k/i);
            for(j=0;j<i;j++)
            {
               if(a[j]>m)
               {
                   n=n+(a[j]-m);
               }
            }

            printf("Set #%d\nThe minimum number of moves is %d.\n\n",++l,n);

        }
    }
    return 0;
}

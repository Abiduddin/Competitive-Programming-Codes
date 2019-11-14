#include <stdio.h>
#include <math.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    double j,k,l,m,n;
    int c=0,i;

    while(1)
    {
        scanf("%d",&i);
        if(i==0)
            break;
        else{
        scanf("%lf%lf%lf",&j,&k,&l);
        if(i==1)
        {
            m=(((j+k)/2)*l);
            n=((k-j)/l);
        }
        else if(i==2)
        {
            n=((k-j)/l);
            m=(((j+k)/2)*n);
        }
        else if(i==3)
        {
            m=sqrt((j*j+2*k*l));
            n=((m-j)/k);
        }
        else
        {
            m=sqrt((j*j-2*k*l));
            n=((j-m)/k);

        }

        printf("Case %d: %.3f %.3f\n",++c,m,n);
    }}
    return 0;
}

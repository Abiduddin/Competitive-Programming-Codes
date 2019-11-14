
#include <bits/stdc++.h>

int main()
{
    double a,b,c=0,d,e,t;

    scanf("%lf",&t);

    while(t--)
    {

        scanf("%lf%lf%lf%lf",&a,&b,&d,&e);
        a=a+b+e+d;
        if(a<7500)
            printf("Case %.0lf: %.0lf\n",++c,a);
        else if(a<10000)
        {
            a=ceil(a=(a-(a*.1)));
            printf("Case %.0lf: %.0lf\n",++c,a);
        }

        else
        {
            printf("Case %.0lf: %.0lf\n",++c,ceil(a=(a-(a*.2))));
        }
    }
}

/*
3
1502 2500 3700 4200
1503 2500 3700 4200
1500 2500 3700 4200

*/

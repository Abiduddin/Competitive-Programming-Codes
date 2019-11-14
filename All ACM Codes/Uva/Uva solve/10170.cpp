#include <stdio.h>

int main()
{

    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    double s,d,i,j;


    while(scanf("%lf%lf",&s,&d)!=EOF)
    {

        while(d>=0)
        {

            d=d-s;
            if(d>0)
               s++;

        }
        printf("%.0lf\n",s);
    }
    return 0;

}

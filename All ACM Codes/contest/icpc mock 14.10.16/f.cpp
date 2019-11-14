#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long t,i,j,n,q,pid,rid;
    //vector <unsigned long long> a(20000000,0);
    scanf("%llu", &t);

    for(i=1;i<=t;i++)
    {
        vector <unsigned long long> a(20000000,0);
        scanf("%llu", &n);
        for(j=0;j<n;j++)
        {
            scanf("%llu", &q);
            if(q==1)
            {
                scanf("%llu%llu", &pid, &rid);

                if(a[rid]==0){
                    printf("Y\n");
                    a[rid]=pid;
                }
                else
                    printf("N\n");


            }
            else
            {
                scanf("%llu", &rid);
                if(a[rid]==0)
                    printf("F\n");
                else{
                    printf("%llu\n", a[rid]);
                a[rid]=0;
            }

        }
    }
    }
    return 0;
}


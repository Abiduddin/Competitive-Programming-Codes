#include <bits/stdc++.h>
using namespace std;


int main()
{
    int i,j,k,l,n,m,n1,n2,t,c=0,r;
    vector<int > num;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&m,&n);
        i=m;

        while(i--)
        {
            scanf("%d",&j);
            num.push_back(j);
        }
        printf("Case %d:\n",++c);
        while(n--)
        {
            scanf("%d%d",&n1,&n2);

            if(n1<=num[0])
                k=0;
            else
            {
                i=1;
                while(n1>num[i])
                {
                    i++;
                }
                k=i;
            }
            if(n2>=num[m-1])
                l=m-1;
            else
            {
                i=m-1;
                while(n2<num[i])
                {
                    i--;
                }
                l=i;
            }
            l=l-k+1;
            printf("%d\n",l);

        }
    }


    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t1,t2,t3,c,a,b;

    scanf("%d%d%d",&a,&b,&c);

    t1=max(a,max(b,c));
    t2=min(a,min(b,c));


    printf("%d\n",t1-t2);




    return 0;
}

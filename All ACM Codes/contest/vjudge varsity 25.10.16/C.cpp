#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long i,j;

    //scanf("%lld",&i);
    cin>>i;
    {
        printf("%lld",i);
        while(i!=0)
        {
            j=i%10;
            i=i/10;
            printf("%lld",j);
        }
        printf("\n");
    }


    return 0;
}

#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i,j,l=0,k,m,n,p;

    scanf("%d",&i);
    while(i--)
    {
       scanf("%d.%d.%d.%d",&k,&m,&n,&p);
       printf("Case %d: ",++l);
        cout<<oct<<k<<"."<<oct<<m<<"."<<oct<<n<<"."<<oct<<p<<endl;
    }
}

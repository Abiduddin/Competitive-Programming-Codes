#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> ar;
    int i,j,k,l,position,n;

    while(scanf("%d",&n)&&n)
    {
        ar.clear();
        for(i=1;i<=n;i++)
            ar.push_back(i);
        position=0;
        printf("Discarded cards:");
        while((ar.size()-(position+1))>=1)
        {
            if(ar[position]==1)
                printf(" 1");
            else
                printf(", %d",ar[position]);

            position++;
            l=ar[position];
            ar.push_back(l);
            position++;

        }
        printf("\nRemaining card: %d\n",ar[ar.size()-1]);
    }

}

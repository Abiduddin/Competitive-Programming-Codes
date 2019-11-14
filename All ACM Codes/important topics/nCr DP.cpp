#include <bits/stdc++.h>
using namespace std;

int v[100][100];

int ncr(int n,int r)
{
    if(v[n][r]!=0)
        return v[n][r];

    else if(n==r)
        return 1;

    else if(r==1)
        return n;

    return v[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
}


int main()
{
    int i,j;
    scanf("%d%d",&i,&j);

    printf("nCr : %d\n",ncr(i,j));
}

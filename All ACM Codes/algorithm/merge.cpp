#include <bits/stdc++.h>
using namespace std;




int main()
{
    vector<int > A;
    int i,j,k,l,n,p,q,r,n1,n2;

    printf("Enter Array size: ");
    scanf("%d",&l);
    while(l--)
    {
        scanf("%d",&k);
        A.push_back(k);
    }

    r=A.size()-1;
    p=0;
    q=floor(r/2);

    /// Algorithm Star
    n1=q-p+1;
    n2=r-q;
    vector<int > L,R;
    for(i=1;i<=n1;i++)
        L.push_back(A[p+i-1]);
    for(j=1;j<=n2;j++)
        R.push_back(A[q+j]);
    L.push_back(999999999);  /// infinity
    R.push_back(999999999);  /// infinity
    i=0;
    j=0;
    for(k=p;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            A[k]=L[i];
            i=i+1;
        }
        else
        {
            A[k]=R[j];
            j=j+1;
        }
    }
    /// Algorithm end


    printf("NOW:\n");
    for(i=0;i<=r;i++)
        printf("%d ",A[i]);
    printf("\n");






}

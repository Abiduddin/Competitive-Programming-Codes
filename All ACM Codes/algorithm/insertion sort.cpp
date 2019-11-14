#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int > A;
    int i,j,k,l,n,key;

    printf("Enter array size: ");
    scanf("%d",&l);
    while(l--)
    {
        scanf("%d",&k);
        A.push_back(k);
    }

    n=A.size();

    /// Algorithm Star
    for(j=1;j<n;j++)
    {
        key=A[j];
        /// Insert A[j] into the sorted sequence A[1....j-1]
        i=j-1;
        while(i>=0&&A[i]>key)
        {
            A[i+1]=A[i];
            i=i-1;
        }
        A[i+1]=key;
    }
    /// Algorithm end


    printf("NOW:\n");
    for(i=0;i<n;i++)
        printf("%d ",A[i]);
    printf("\n");


}

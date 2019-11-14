#include <bits/stdc++.h>
using namespace std;

vector<int > A;

void mergeA(int p,int q,int r)
{
    int i,j,k;
    int n1=q-p+1;
    int n2=r-q;
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
}

void merge_sort(int p,int r)
{
    if(p<r){
        int q=floor((p+r)/2);
        merge_sort(p,q);
        merge_sort(q+1,r);
        mergeA(p,q,r);

    }
}

int main()
{

    int i,j,k,l,p,q,r;

    printf("Enter Array size: ");
    scanf("%d",&l);
    while(l--)
    {
        scanf("%d",&k);
        A.push_back(k);
    }

    r=A.size()-1;
    p=0;

    merge_sort(p,r);


    printf("NOW:\n");
    for(i=0;i<=r;i++)
        printf("%d ",A[i]);
    printf("\n");






}

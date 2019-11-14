#include <stdio.h>

int aa[1000];

int a;
int f(int n)
{
    //int a;
    if(aa[n]!=-1) return aa[n];
//    if(n==0) return 0;
//    if(n==1) return 1;

    a=(f(n-1)+f(n-2));

    aa[n]=a;
    return a;
}

int main()
{
    int i,j,k,l;
    aa[0]=0;
    aa[1]=1;
    for(i=2;i<1000;i++)
        aa[i]=-1;
    scanf("%d",&i);
    printf("%d %d\n",i,f(i));

    while(scanf("%d",&i)!=EOF)
    {
        printf("%d %d\n",i,aa[i]);
    }
}

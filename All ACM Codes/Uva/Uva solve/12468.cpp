#include <stdio.h>

int main()
{
    int i,j,k,l;


    while(scanf("%d %d",&k,&l)!=EOF)
    {
        if(k==-1&&l==-1)
            break;

        j=0;
        if(k<l)
        {
            j=(l-k)<(k-0+99-l+1)?(l-k):(k-0+99-l+1);

        }
        else
        {
            j=(k-l)<(l-0+99-k+1)?(k-l):(l-0+99-k+1);
        }

        printf("%d\n",j);
    }
}

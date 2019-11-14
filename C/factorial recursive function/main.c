#include <stdio.h>
int fout(int x);
int main()
{
    int n,p;
    scanf("%d",&n);
    p=fout(n);
    printf("%d",p);
    return 0;
}
int fout(int x)
{
    if(x==1)
        return 1;
    return(x*fout(x-1));
}

#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    int i,j;

    while(scanf("%d%d",&i,&j)!=EOF)
    {
        printf("%d\n",((i*j)-1));
    }

    return 0;


}

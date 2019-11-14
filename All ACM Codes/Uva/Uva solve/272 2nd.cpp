            ///272

#include <cstdio>
int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aaans.txt","w",stdout);
    char aa;
    int i,j,k=0,l;
    while(scanf("%c",&aa)!=EOF)
    {
            if((aa=='"')&&k==0)
            {
                k+=1;
                printf("``");

            }
            else if((aa=='"')&&k==1)
            {
                k-=1;
                printf("''");

            }
            else
                printf("%c",aa);

    }
    return 0;
}

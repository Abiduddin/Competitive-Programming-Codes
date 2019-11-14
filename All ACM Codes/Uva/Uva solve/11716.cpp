#include <bits/stdc++.h>
int main()
{
    int i,j,k,l,t;
    char a[11000];

    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(a);
        l=strlen(a);
        i=sqrt(l);
        if(l!=i*i)
            printf("INVALID\n");
        else
        {
            for(j=0;j<i;j++)
            {
                for(k=j;k<l;k=k+i)
                {
                    printf("%c",a[k]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}

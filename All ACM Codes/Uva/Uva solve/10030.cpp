#include <stdio.h>

int main()
{
    int i,j,k,l,c,r;

    while(scanf("%d%d",&k,&l)!=EOF)
    {
        if(k==0&&l==0)
            break;

        c=0;r=0;
        while(k!=0||l!=0)
        {
            i=k%10;
            j=l%10;
            if((i+j+r)>=10)
                {
                    c++;
                    r=1;
                }
            else
                    r=0;
            k=k/10;
            l=l/10;
        }
        if(c==0)
            printf("No carry operation.\n");
        else if(c==1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n",c);

    }

   return 0;
}

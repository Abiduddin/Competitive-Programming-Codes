#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    long int i,j,k,l,m,n,p,r;
    char aa[1000],bb[1000];
    while(scanf("%ld%ld",&i,&j)!=EOF)
    {
        l=0;
        m=0;
        while(1)
        {
            k=j*l;
            itoa(k,aa,10);
            p=strlen(aa);
            if(p==i)
            {

                for(n=p-1,r=0;n>=0;n--,r++)
                    bb[r]=aa[n];
                    bb[r]='\0';

                if(!strcmp(aa,bb))
                    m++;

            }
            else if(p>i)
                break;
            l++;
        }
        printf("%ld\n",m);
    }
}


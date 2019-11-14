#include <stdio.h>
#include <string.h>
int str_sub(char a[],char b[])
{
    int i,j,k,l,m,n=1,p;
    j=strlen(a);
    l=strlen(b);
    for(i=0;i<j;i++)
    {
        if(a[i]==b[0])
        {
            n=0;
            for(k=i,m=0;k<j&&m<l;k++,m++)
            {
                p=i;
                if(a[k]==b[m])
                {
                    n++;
                }

                }
                if(n==l){
                printf("Found index number %d\n",p+1);
                    return 0;
            }



        }
    }
    printf("Not found\n");

}
int main()
{
    char a[1000],b[1000];
    printf("Enter string: ");
    gets(a);
    printf("Enter sub string: ");
    gets(b);
    str_sub(a,b);
    return 0;
}

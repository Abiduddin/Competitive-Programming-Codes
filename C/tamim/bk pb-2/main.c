#include <stdio.h>
#include <string.h>

int main()
{
    register int i,j;
    int k,l=1;
    char aa[1000];

    scanf("%d",&k);
    getchar();

    for(i=0;i<k;i++){
        gets(aa);
        for(j=0;j<strlen(aa);j++){
            if((aa[j]!=' ')&&(aa[j+1]==' ')){
                    l++;

            }
        }
        printf("%d\n",l);
        l=1;
    }
    return 0;
}

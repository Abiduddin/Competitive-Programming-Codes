#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,t,k=0;
    scanf("%d",&t);
    getchar();
    char a[t][100];
    while(k<t){
        gets(a[k]);
        j=1;
        for(i=0;a[k][i];i++){
            if(a[k][i]!=' '&&a[k][i+1]==' ')
                j++;
        }
        printf("%d \n",j*420);
        k++;
    }
    return 0;
}

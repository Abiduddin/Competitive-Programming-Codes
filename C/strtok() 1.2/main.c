#include <stdio.h>
#include <string.h>

int main()
{
    char nm[1000];
    char *wr;
    register int i=1,j=0;
    int k;

    scanf("%d",&k);
    getchar();
    while(j<k){
    gets(nm);
    wr=strtok(nm," ");
    while((wr=strtok(NULL," "))!=NULL)
        i++;
    printf("%d\n",i);
    i=1;
    j++;

    }
    return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
    int i,n;
    scanf("%d",n);

    char aa[n];

    for(i=0;i<n;i++){
        scanf("%c",aa[i]);
    }
    printf("%s",aa);

   //puts(aa);
    return 0;
}

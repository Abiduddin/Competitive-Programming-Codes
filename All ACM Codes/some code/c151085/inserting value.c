#include <stdio.h>
int main()
{
    int s[50];
    int i,j,k,n,t;
    printf("How many values: ");
    scanf("%d",&n);
    printf("Please Insert an array: ");
    for(i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    printf("Type the value and the INDEX respectively: ");
    scanf("%d",&j);
    scanf("%d",&k);
    t=k-1;
    for(i=n;i>=k;i--){
        s[i]=s[i-1];
    }
    s[t]=j;
    for(i=0;i<=n;i++){
        printf("%d ",s[i]);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int a,i,j,n,k;
    scanf("%d",&n);
    k=n-1;
    for(i=1;i<=n;i++){
        for(a=k;a>0;a--){
        printf(" ");
    }
        for(j=1;j<=i;j++){

        printf("%d",j);
    }
    printf("\n");
    k--;

}
}

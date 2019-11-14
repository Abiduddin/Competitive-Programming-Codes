#include <stdio.H>
int main()
{
    int s[50];
    int n,i,j=0,k=0;
    printf("How many numbers: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    printf("\nEven: ");
    for(i=0;i<n;i++){
        if(!(s[i]&1))
            printf("%d ",s[i]);
    }
    printf("\n\nODD: ");
    for(i=0;i<n;i++){
        if(s[i]&1)
            printf("%d ",s[i]);
    }
    printf("\n");
    return 0;
}

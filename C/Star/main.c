#include <stdio.h>
int main()
{
    int a,i,n;
    printf("Enter upper limit: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++) {
        for(n=1;n<=i;n++) {
            printf("*");
        }
        printf("\n");
    }
}

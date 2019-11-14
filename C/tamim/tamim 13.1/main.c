#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d",&a);
    for(b=a;b>0;b--){
        for(c=0;c<b;c++){
            printf("c");
        }
        printf("\n");
    }
    for(b=1;b<a;b++){
        for(c=0;c<=b;c++){
            printf("c");
        }
        printf("\n");
        }
        return 0;
}

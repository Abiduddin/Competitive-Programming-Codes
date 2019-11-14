#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;

    scanf("%d",&a);
    e=a*2;
    for(b=0;b<a;b++){
        e=e-2;
        for(c=0;c<=b;c++){
            printf("c");
        }
        for(d=0;d<e;d++){
            printf(" ");
        }
        for(c=0;c<=b;c++){
            printf("c");
        }
        printf("\n");
    }


}

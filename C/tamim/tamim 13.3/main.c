#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    e=0;
    scanf("%d",&a);
    for(b=a;b>0;b--){
            e++;
            for(d=1;d<e;d++){
                printf(" ");
            }

            for(c=0;c<b;c++){
            printf("c");
        }
        printf("\n");
    }
   // e--;
    for(b=1;b<a;b++){
        e--;
        for(d=1;d<e;d++){
            printf(" ");
        }
        for(c=0;c<=b;c++){
            printf("c");
        }
        printf("\n");
    }


}

#include <stdio.h>
#include <stdlib.h>
struct ch{
int aa;
char a;
char h;

}v1,vv2;
int main()
{
    printf("Enter v1.aa: ");
    scanf("%d",&v1.aa);
    getchar();
    printf("Enter vv2.aa: ");
    scanf("%c",&vv2.a);
    getchar();
    printf("Enter v1.h: ");
    scanf("%c",&v1.h);
    printf("v1.aa = %d\nvv2.a = %c\nv1.h = %c",v1.aa,vv2.a,v1.h);
    return 0;
}

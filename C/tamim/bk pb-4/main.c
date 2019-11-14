#include <stdio.h>
int main()
{
    char a,b,c;
    int i;

    scanf("%d",&i);
    getchar();
    while(i--){
        scanf("%c %c %c",&a,&b,&c);
        getchar();
        printf("%d\n",a+b+c);
    }
    return 0;
}

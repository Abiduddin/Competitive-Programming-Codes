#include <stdio.h>
int main()
{
    char a[90];
    scanf("%[^\n]",&a);//except A B C D \n(new line)
    printf("%s",a);
}

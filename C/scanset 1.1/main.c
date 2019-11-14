#include <stdio.h>
int main()
{
    char a[90];
    scanf("%[^ABCD\n]",&a);//except A B C D \n(new line) ^ means except
    printf("%s",a);
}

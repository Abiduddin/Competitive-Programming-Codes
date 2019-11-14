#include <stdio.h>
int main()
{
    int a;
    printf("Enter your number: ");
    scanf("%d",&a);
    f(a);
    return 0;
}
void f(int n)
{
    if(n==0)
        return ;
    f(n/2);
    printf("%d",n%2);
    //printf("Yes");
}

#include <stdio.h>
int print(int a[],int i);
int main()
{
    int a[]={69,87,45,21,47};
    print(a,5);
}

int print(int a[],int i)
{
    if(i<=0) return 0;;
    i--;
    printf("%d ",a[i]);

    return print(a,i);
}

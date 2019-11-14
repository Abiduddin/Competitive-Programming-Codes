#include <stdio.h>

int f(int n);
int array[50];
int main()
{
    int i,j;

    f(20);

    for(i=0;i<20;i++)
        printf("%d\n",array[i]);
}
int f(int n)
{
    if(n==0) return 0;
    else if(n==1) array[n]=1;
    else //if(array[n]==0)
        array[n]=f(n-1)+f(n-2);
    return array[n];
}

#include <stdio.h>

void inp(int a[],int i);

int main()
{
    int j,i,a[100];
    scanf("%d",&i);
    for(j=0;j<i;j++)
        scanf("%d",&a[j]);
    inp(a,i);
}
void inp(int a[],int i)
{
    if(i==0) return;
    i--;
    printf("%d ",a[i]);
    inp(a,i);


}

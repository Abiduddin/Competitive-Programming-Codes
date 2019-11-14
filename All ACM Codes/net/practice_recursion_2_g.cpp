#include <stdio.h>

int r,s=1;
void prt(int a[],int i)
{
    if(r>((i-1)/2)&&s>(i/2)) return;
    printf("%d %d\n",a[r],a[i-s]);
    r++;
    s++;
    prt(a,i);

}

int main()
{
    int i,j,a[100];
    scanf("%d",&i);
    for(j=0;j<i;j++)
        scanf("%d",&a[j]);

    prt(a,i);

}

#include <stdio.h>

//int r;
void prt(int a[],int i,int j)
{
    if(j>i) return;

    printf("%d %d\n",a[j],a[i]);
    prt(a,i-1,j+1);


}

int main()
{
    int i,j,a[100];
    scanf("%d",&i);
    for(j=0;j<i;j++)
        scanf("%d",&a[j]);

    prt(a,i-1,0);

}

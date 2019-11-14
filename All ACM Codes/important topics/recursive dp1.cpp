#include <stdio.h>

int j;
int a[1000];
int print(int j)
{
    int i=j;
    //int j=0;
    if(i==0) return 0;
    if(a[i]!=-1) return a[i];
    //printf("%d  %d\n",i,j++);
    print(i-1);
    //printf("%d  %d\n",i,j++);
    a[i]=i;
    return a[j];
}

int main()
{
    int i,j,k,l;

    for(i=0;i<1000;i++)
        a[i]=-1;
    //scanf("%d",&i);
    scanf("%d",&i);
    printf("%d\n",print(i));

    while(scanf("%d",&i)!=EOF)
    {
    printf("%d\n",a[i]);

    }
}

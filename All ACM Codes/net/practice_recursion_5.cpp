#include <stdio.h>
#include <math.h>

int sum(int i,int j, int k)
{
    if(j==0)
        return 1;


    k=k+pow(i,j)+sum(i,j-1,k);

    return k;
}

int main()
{
    int i,j,k;

    scanf("%d %d",&i,&j);

    k=sum(i,j-1,0);

    printf("%d\n",k);

}

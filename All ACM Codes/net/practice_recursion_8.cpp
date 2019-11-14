#include <stdio.h>

void prm(int i,int j)
{
    if(((i==1)||(i%j==0))&&i!=2)
    {
        printf("not prime\n");
        return;
    }
    if(j*j>i||i==2)
    {
        printf("prime\n");
        return;
    }

    prm(i,j+1);

}

int main()
{
    int i,j,k;

    while(scanf("%d",&i)!=EOF)
    {
        prm(i,2);
    }
    return 0;
}

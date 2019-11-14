#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    int i,j,k,l;
    scanf("%d",&i);
    while(i--)
    {
        scanf("%d%d%d",&j,&k,&l);
        if((j>=(k+l))||(k>=(j+l))||(l>=(k+j)))
        {
            printf("Wrong!!\n");
        }
        else
            printf("OK\n");
    }
    return 0;
}

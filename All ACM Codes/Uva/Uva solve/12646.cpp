#include <stdio.h>

int main()
{
    int i,j,k;
    while(scanf("%d%d%d",&i,&j,&k)==3)
    {
        //l=0,m=0;
        if((i==0&&j==1&&k==1)||(i==1&&j==0&&k==0))
            printf("A\n");
            else if((i==0&&j==1&&k==0)||(i==1&&j==0&&k==1))
            printf("B\n");
            else if((i==0&&j==0&&k==1)||(i==1&&j==1&&k==0))
            printf("C\n");
            else
                printf("*\n");

    }
    return 0;

}

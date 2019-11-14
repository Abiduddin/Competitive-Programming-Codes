#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k,l=0;
    char aa[10],cc[10];

    scanf("%d",&i);
    getchar();
    while(i--)
    {
        gets(aa);
        l=0;
        for(j=0;j<2;j++)
            for(k=3;k<5;k++){
                if(aa[j]==aa[k]){
                    cc[l]=aa[j];
                    l++;
            }
        }
        if(l==1)
            printf("%c\n",cc[l-1]);
        else if(l>=2){
            if(cc[0]<cc[1])
                printf("%c%c\n",cc[0],cc[1]);
            else if(cc[0]==cc[1])
                printf("%c\n",cc[0]);
            else
                printf("%c%c\n",cc[1],cc[0]);
        }
        else
            printf("N\n");

    }
    return 0;
}

#include <stdio.h>

int main()
{
    register int l,i;
    int j,a[8];
    while((scanf("%d",&j))!=EOF)
    {
        l=0;
        for(i=0;i<5;i++){
            scanf("%d",&a[i]);
            if(a[i]==j){
                l++;
            }

        }
        printf("%d\n",l);

    }
    return 0;


}


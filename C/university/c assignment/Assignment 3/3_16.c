#include<stdio.h>
#include<math.h>
int main()
{
    int i, n, flag, m;
    scanf("%d", &n);

    flag=1;
    m = sqrt(n);

    for(i=2; i<=m; i++)
    {
        if(n%i==0)
        {
            printf("Not Prime\n");
            flag=0;
            break;
        }
    }
    if(flag==1)
        printf("Prime\n");


    return 0;
}

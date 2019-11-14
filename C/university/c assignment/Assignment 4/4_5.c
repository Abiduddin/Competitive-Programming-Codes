#include<stdio.h>
int main()


{
    int a[2][3],b[2][3],c[2][3],i,j;

    printf("Table a ->\n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &a[i][j]);

    }
    printf("Table b ->\n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &b[i][j]);
    }

    for(i=0; i<2; i++){
        for(j=0; j<3; j++)
            c[i][j]=a[i][j]+b[i][j];
    }

    printf("Sum of these tables are ->\n");

    for(i=0; i<2; i++){
        for(j=0; j<3; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;

}


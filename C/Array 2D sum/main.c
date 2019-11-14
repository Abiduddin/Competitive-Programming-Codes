#include <stdio.h>
int main()
{
    int table1[10][10],table2[10][10],sum[10][10];
    int r,c,row,column;
    printf("How many rows?:");
    scanf("%d",&row);
    printf("How many column?:");
    scanf("%d",&column);
    printf("Please enter your data for table1\n");
    for(r=0;r<row;r++)
        for(c=0;c<column;c++)
        scanf("%d",&table1[r][c]);
    printf("Please enter your data for table2\n");
    for(r=0;r<row;r++)
        for(c=0;c<column;c++)
        scanf("%d",&table2[r][c]);
    for(r=0;r<row;r++)
        for(c=0;c<column;c++)
        sum[r][c]=table1[r][c]+table2[r][c];
    printf("Table of sum : \n");
    for(r=0;r<row;r++){
        for(c=0;c<column;c++)
        printf("%d ",sum[r][c]);
    printf("\n");
    }
    return 0;
}

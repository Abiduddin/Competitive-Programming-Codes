#include <stdio.h>
int main()
{

    int i,j,k=0,ch=0,chart[5][5]={{6,4,7,8,9},{3,7,1,9,9,},{8,6,4,2,7},{2,4,2,5,9},{4,1,6,7,3}};
    int chart2[5][5];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            chart2[i][j]=chart[j][i];
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ",chart2[i][j]);
        }
        printf("\n");
    }



}

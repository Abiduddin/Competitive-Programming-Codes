#include <stdio.h>
int main()
{

    int i,j,k=0,ch=0,chart[5][5]={{6,4,7,8,9},{3,7,1,9,9,},{8,6,4,2,7},{2,4,2,5,9},{4,1,6,7,3}};


    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            ch=ch+chart[i][j];
            //printf("%d\n",chart[i][j]);
        }
        printf("FOR ROW %d sum is: %d\n",i+1,ch);
        ch=0;
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            ch=ch+chart[j][i];
        }
        printf("FOR column %d sum is %d\n",i+1,ch );
        ch=0;
    }




}

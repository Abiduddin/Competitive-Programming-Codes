#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i,j,k,l,m,n;
    char c;

    int aa[10][10];

    for(i=0;i<10;i++)
        for(j=0;j<10;j++)
            aa[i][j]=1;

    printf("Enter number of block cells: ");
    scanf("%d",&k);

    printf("Enter cells: ");
    for(i=0;i<k;i++){
        scanf("%d %d",&m,&n);
        aa[m][n]=0;
    }
    printf("Please enter the initial position: ");
    scanf("%d %d", &i, &j);
    getchar();
    while(1)
    {
        //printf("Command: ");
        scanf("%c", &c);
        //c=getchar();
        if(toupper(c)=='S')
            break;
        else if(toupper(c)=='U'&&((aa[m=i-1][j])==1))
                i--;
        else if(toupper(c)=='D'&&((aa[m=i+1][j])==1))
                i++;
        else if(toupper(c)=='R'&&((aa[i][m=j+1])==1))
                j++;
        else if(toupper(c)=='L'&&((aa[i][m=j-1])==1))
                j--;
    }
    printf("Final position of the robot: %d %d",i,j);

    return 0;

}

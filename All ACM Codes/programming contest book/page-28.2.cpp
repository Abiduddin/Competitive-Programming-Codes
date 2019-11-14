#include <stdio.h>

int main()
{
    int x,y,i;

    scanf("%d %d",&x,&y);

    if(x>0&&y>0)
        printf("1st quadrant\n");
    else if(x<0&&y>0)
        printf("2nd quadrant\n");
    else if(x<0&&y<0)
        printf("3rd quadrant\n");
    else
        printf("4th quadrant\n");

    return 0;
}

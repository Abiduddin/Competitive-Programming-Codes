#include <stdio.h>

#define output(i) printf("%3d %3d %3d \n",i ## 3,i ## 2,i ## 1)

int main()
{
    int count1,count2,count3,count4;
    int i1,i2,i3;

    count1=10;
    count2=20;
    count3=33;
    count4=90;
    i1=99;
    i2=-10;
    i3=54;
    output(count);
    output(i);
    return 0;
}

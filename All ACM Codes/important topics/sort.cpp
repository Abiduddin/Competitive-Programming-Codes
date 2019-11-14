#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    int a[]={33,5,23,1,89,23,12,3},i;

    sort(a,a+8);
    for(i=0;i<8;i++)
        printf("%d ",a[i]);
    return 0;
}

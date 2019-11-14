#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
    vector<int > a,b;

    int i,j,k;

    printf("Insert\n");
    for(i=10;i<20;i++)
        a.push_back(i);
    printf("Print\n");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");

    j=a.size();
    printf("vector size = %d\n",j);

    a[0]=790;
    a[4]=88;
    a[7]=77;
    printf("After change value\n");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");

    printf("Copy vector\n");
    b=a;
    for(i=0;i<10;i++)
        printf("%d ",b[i]);
    printf("\n");


}

#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;


int main()
{
    vector <int> a;

    for(int i=0;i<100;i++)
    {
        a.push_back(i);
    }
    int j=a.size();
    for(int i=0;i<100;i++)
    {
        printf("%d\n",a[i]);
    }
    a.push_back(100);
    printf("%d\n",a[100]);
}


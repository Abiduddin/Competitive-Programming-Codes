#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    char line[10000];

    while(gets(line))
    {
        stringstream ss(line);
        int num;
        vector<int> v;
        while(ss>>num)
            v.push_back(num);
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<endl;
    }

    return 0;
}

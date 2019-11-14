#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long i,j;
    string st;

    cin>>st;
    j=st.length()-1;

    cout<<st;

    for( ; j>=0; j--)
        printf("%c",st[j]);

    printf("\n");



    return 0;
}

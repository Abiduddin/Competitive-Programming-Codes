#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k;
    char str[60];

    cin>>i;
    cin>>str;

    j=0;

    for(k=0;k<11;k++){
        if((k+j)<i){
            j+=k;
            cout<<str[j];
            //cout<<j;

        }
        else
        {
            break;
        }
    }

    return 0;
}

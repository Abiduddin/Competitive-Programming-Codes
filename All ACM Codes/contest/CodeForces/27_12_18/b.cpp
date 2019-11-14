#include <bits/stdc++.h>
using namespace std;

int check[100200];
int numbers[100010];
int main()
{
    int i,j,k,l,mx,mn;

    cin>>i;
    for(j=0,l=0; j<i; j++)
    {
        cin>>numbers[j];
      /*  if(check[k]==0)
        {
            check[k]=1;
            numbers[l++] = k;
        }*/
    }

    //mx=9999999;
    sort(numbers,numbers+i);
    /*   if(l<=2)
       {
           cout<<"0"<<endl;
       }
       else
       {
          */
    if(numbers[i-2]-numbers[0]<numbers[i-1]-numbers[1])
        mx=numbers[i-2]-numbers[0];
    else
        mx=numbers[i-1]-numbers[1];

    cout<<mx<<endl;
    //  }



    return 0;
}


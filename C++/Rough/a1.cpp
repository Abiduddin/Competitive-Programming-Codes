#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k,l,c,total=0,lth,cn;
    long long int arr[10100];

    cin>>t;

    while(t--)
    {

       cin>>lth;
       cin>>arr[0];
       total=0;
       for(i=1;i<lth;i++)
       {
           cin>>arr[i];
           if(arr[i-1]<=arr[i])
            total++;

       }
       cin>>cn;
       while(cn--)
       {
       cin>>j>>k;

       if(lth==1)
       {
           cout<<"yes"<<endl;
           continue;
       }
       else if(j==0)
       {
           if(arr[j]<=arr[j+1])
           {
               arr[j]=k;
               if(arr[j]>arr[j+1])
               {
                   total--;
               }
           }
           else
           {
               arr[j]=k;
               if(arr[j]<=arr[j+1])
               {
                   total++;
               }
           }
       }
       else if(j==(lth-1))
       {
           if(arr[j-1]<=arr[j])
           {
               arr[j]=k;
               if(arr[j-1]>arr[j])
               {
                   total--;
               }
           }
           else
           {
               arr[j]=k;
               if(arr[j-1]<arr[j])
               {
                   total++;
               }
           }
       }
       else
       {
           if(arr[j-1]<=arr[j]&&arr[j]<=arr[j+1])
           {
               arr[j]=k;
               if(arr[j-1]>arr[j]||arr[j]>arr[j+1])
               {
                   total--;
               }
           }
           else
           {
               arr[j]=k;
               if(arr[j-1]<=arr[j]&&arr[j]<=arr[j+1])
               {
                   total++;
               }
           }
       }

        if(total==(lth-1))
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;

       }


    }

}


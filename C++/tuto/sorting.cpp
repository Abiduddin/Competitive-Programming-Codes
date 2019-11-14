#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[]={2,4,1,6,7,5,3},i;

    for(i=0;i<7;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    sort(arr,arr+7);

    for(i=0;i<7;i++)
        cout<<arr[i]<<" ";

    return 0;
}

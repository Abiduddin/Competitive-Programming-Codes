#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> first;
    vector<int> second (4,100);
    vector<int> third (second.begin(),second.end());
    vector<int> fourth (third);

    int myint[]={16,2,77,29};

    vector<int> fifth (myint, myint + sizeof(myint)/sizeof(int));

    cout<<"The contents of fifth are: ";

    for(size_t i=0;i<fifth.size();i++)
        cout<<" "<<fifth[i];
    cout<<endl;

    return 0;
}

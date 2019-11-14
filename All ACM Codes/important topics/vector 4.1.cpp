#include <iostream>
#include <vector>
using namespace std;

int main()
{
    unsigned int i;
    vector<unsigned int> myvector;

    for(i=1;i<=10;i++)
        myvector.push_back(i);
    myvector.erase(myvector.begin()+5);

    myvector.erase (myvector.begin(), myvector.begin()+3);
    cout<<"myvector contains: ";
    for(i=0;i<myvector.size();i++)
        cout<<" "<<myvector[i];
    cout<<endl;

    myvector.clear();
    cout<<"size: "<<myvector.size()<<endl;

    myvector.resize(10);
    cout<<"size: "<<myvector.size()<<endl;
    return 0;


    return 0;
}

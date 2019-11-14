/// IO custom inserter extractor final example

#include <iostream>
using namespace std;

class triangle
{
public:
    int n;
    triangle(){}
    triangle(int x){n=x;}
};

ostream &operator << (ostream &stream, triangle t)
{

    int i,j=1,k;
    k=t.n;
    while(k--)
    {
        for(i=1;i<=k;i++)
            stream<<" ";
        for(i=1;i<=j;i++)
            stream<<"*";
        j=j+2;
        stream<<endl;
    }
    return stream;
}

istream &operator >> (istream &stream, triangle &t)
{
    stream>>t.n;
    return stream;
}

int main()
{
    triangle ob;
    cin>>ob;
    cout<<ob;
}

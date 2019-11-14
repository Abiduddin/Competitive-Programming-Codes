#include <iostream>

using namespace std;

class first    //first is a class and class is keyword
{
    int m,n;
    ///int p=5;    Error because class member variable aren't intialized
    public:
    int sum;
    void input_data(int a,int b); //member fn declaration
    void display(void)
    {
        cout<<"m: "<<m<<endl;
        cout<<"n: "<<n<<endl;
        cout<<"sum: "<<sum<<endl;
    }

};
// member function defined outside class
void first::input_data(int a,int b)
{
    m=a;
    n=b;
    sum=m+n;
}
// main() fn
int main()
{
    first ob1;
    int x,y;
    cout<<"object ob1\n";
    cout<<"Enter 2 integer values ";
    cin>>x>>y;
    ob1.input_data(x,y);
    ob1.display();
    first ob2;
    cout<<"\n\nobject ob2\n";
    cout<<"Enter 2 integer value ";
    cin>>x>>y;
    ob2.input_data(x,y);
    ob2.display();
    return 0;
}

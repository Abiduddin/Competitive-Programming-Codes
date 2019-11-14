    /*
    OOP (C++), Program-01: A general program that introduce with the primary environment (introduction of class and object) of OOP (C++).
    Prepared By GSC, CSE, IIUC.
    Date: 03-02-15
    Time: 10:02:01 pm
    Facebook: www.facebook.com/gsc.cse
    E-mail: sarwar.pustcse1@gmail.com
    Skype: sarwar_pust_cse
    Mobile: 01861500457
    */

    #include<iostream>
    using namespace std;

    class First // First is a class name and class is Keyword
    {
        int m, n; // private by default
        //int p=5; //ERROR, because class member variables are not initialized directly*/

        public:
            int sum;
            void input_data(int a, int b); // member function declaration
            void display(void) // function defined inside class
            {
                cout<<"m: "<<m<<endl;
                cout<<"n: "<<n<<endl;
                cout<<"Sum: "<<sum<<endl;
            }

    };

    // Member function defined outside class
    void First :: input_data(int a, int b)
    {
        /*class member variables/functions(private and public) are directly used within itself member functions*/
        m=a;
        n=b;
        sum=m+n;
    }

    /* .........The main () function...........  */

    int main()
    {
        First ob1; // create object ob1
        int x,y; // in C++ , variables are declare anywhere.
        cout<<"Object ob1\n";
        cout<<"Enter two integer values: ";
        cin>>x>>y;

        /* Only public members are accessible outside of class, within another classes or functions */
        ob1.input_data(x,y); // call member function
        ob1.display(); // call member function

        /*...another object.....*/
        First ob2; // create object ob2
        cout<<"\n\n\n Object ob2\n";
        cout<<"Enter two integer values: ";
        cin>>x>>y;
        ob2.input_data(x,y); // call member function
        ob2.display(); // call member function

        /* access sum member variable, sum is public*/
        cout<<"\n\n\nob1.sum="<<ob1.sum<<endl;
        cout<<"ob2.sum="<<ob2.sum<<endl;

        /*ERROR, cannot accessible. Because m is a private member variable.*/
        //cout<<ob1.m;
        return 0;
    }

    /*
    No.6: Introduction of constructors.

    Created By GSC,CSE,IIUC.
    Date: 15-02-15
    Time: 7:26:01 pm
    Facebook: www.facebook.com/gsc.cse
    E-mail: sarwar.pustcse1@gmail.com
    Skype: sarwar_pust_cse
    Mobile: 01861500457
    */

    #include<iostream>
    using namespace std;

    class math//  math is a class.
    {
        int m,n; // private by default

        public:
            math(void);// constructor 1
            math(int a,int b) {m=a, n=b;}  // parameterized constructor 2

            void display()
            {
                cout<<"m = "<<m<<"\n";
                cout<<"n = "<<n<<"\n";
            }
    };

    math :: math(void)
    {
        m=n=0;
    }

    /* .........The main () function...........  */

    int main()
    {
        math A; // implicit call constructor 1

        //math A=math();// explicit call constructor 1

        math B=math(4,5);// explicit call constructor 2

        math C(7,8);// implicit call constructor 2

        C=B;

        //math C=math(4,5);
        int x,y;
        cout<<"Object D\n";
        cout<<"Enter two integer values: ";
        cin>>x>>y;
        math D(x,y);// implicit call constructor 2
        //-------------------------------------------//
        cout<<"Object A: \n";
        A.display();

        cout<<"Object B: \n";
        B.display();

        cout<<"Object C: \n";
        C.display();

        cout<<"Object D: \n";
        D.display();

        return 0;
    }

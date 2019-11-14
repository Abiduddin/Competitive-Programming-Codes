#include <iostream>
#include<stdio.h>
using namespace std;

void display(char = '*', int = 1);

int main() {
    freopen("p.out","w",stdout);
    cout<<"No argument passed:\n";
    display();

    cout<<"\n\nFirst argument passed:\n";
    display('#');

    cout<<"\n\nSecond argument passed:\n";//  but here pass first argument again. See note 1.
    display(65);// There is no ERROR. Because the int is automatically converted to char type.

    cout<<"\n\nBoth argument passed:\n";
    display('$', 5);

    return 0;
}

void display(char c, int n){
    for(int i = 1; i <=n; ++i) {
        cout<<c;
    }
    cout<<endl;
}

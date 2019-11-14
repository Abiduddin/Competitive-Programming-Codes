/* exit()
Prototype: void exit(int ExitCode);
Header File: stdlib.h (C) or cstdlib (C++)
Explanation: Exit ends the program.
The ExitCode is returned to the operating system,
similar to returning a value to int main.*/

// Use of New and Delete operators
#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int *p=NULL;//pointer initialize with NULL
    p=new int;//Request memory for variable
     if(!p)// new returns a NUll pointer
     {
        cout<<"Allocatoin Failed"<<endl;
        exit(1);//Returns 1 to the operating system
     }
     *p=123;//Store 123 at allocated address
     cout<<"Value: "<<*p<<endl;
     delete p;// free up the memory
    return 0;

}

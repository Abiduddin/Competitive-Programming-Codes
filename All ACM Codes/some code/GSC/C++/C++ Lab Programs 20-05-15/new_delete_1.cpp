/*Dynamic memory Allocation for array*/

#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int *p=NULL;//pointer initialize with NULL
    p=new int[5];//request memory for 5 integer values
     if(!p)// new returns a NUll pointer
     {
        cout<<"Allocatoin Failed"<<endl;
        exit(1);//Returns 1 to the operating system
     }
     for(int i=0;i<5;i++)
        cin>>p[i];

    for(int i=0;i<5;i++)
        cout<<"p["<<i<<']'<<'='<<p[i]<<endl;//p[0] and *p() both are equivalent
                                            // p[1] and *(p+1) both are equivalent.
    //cout<<*(p+1); Access the second element.
    delete[] p;// free up the memory
    cout<<p[3];
    return 0;

}

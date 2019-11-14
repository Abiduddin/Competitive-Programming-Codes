/// IO manipulation setw, setprecision, setfill

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout<<setw(10)<<setfill('.')<<"sharif"<<endl;
    cout<<setprecision(6)<<12.3354545<<endl;
}

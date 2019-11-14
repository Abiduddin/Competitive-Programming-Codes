// range-based for loop
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str("Hello!");
  int c{4};
  {
    cout << "[" << c << "]";
  }
  cout << "\n";
  return 0;
}

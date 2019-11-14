// priority_queue::top
#include <iostream>       // std::cout
#include <queue>          // std::priority_queue
using namespace std;
int main ()
{
  priority_queue<int>mypq;

  mypq.push(10*-1);
  mypq.push(20*-1);
  mypq.push(15*-1);

  cout << "mypq.top() is now " << mypq.top()*-1 << '\n';

  return 0;
}

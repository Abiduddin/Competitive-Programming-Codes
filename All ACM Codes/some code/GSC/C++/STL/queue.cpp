// queue::front
#include <iostream>       // std::cout
#include <queue>          // std::queue
using namespace std;
int main ()
{
  queue<int> myqueue;

  myqueue.push(77);
  myqueue.push(16);

  myqueue.front() -= myqueue.back();    // 77-16=61

  cout << "myqueue.front() is now " << myqueue.front() << '\n';

  return 0;
}

// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream write;
  write.open("temp.txt", ios:: out);//creates a file called temp.txt
  write << "Bismillahir Rahmanir Raheem.\n";// write on the temp.txt file
  write.close(); // close the temp.txt
  return 0;
}

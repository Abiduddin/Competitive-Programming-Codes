// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream write;
  write.open ("temp.txt",ios::app);//appending the content to the current content of the "temp.txt" file.
  write << "International Islamic University.\n";// write on the temp.txt file
  write.close(); // close the temp.txt
  return 0;
}

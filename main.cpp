#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::ifstream;
using std::string;
using std::endl;
using std::getline;

int main() {
  ifstream infile("parrot.txt");
  string line;

  while (getline(infile, line)) {
    cout << line << endl;
  }

  return 0;
}

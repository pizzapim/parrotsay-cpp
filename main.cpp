#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::cout;      using std::cin;
using std::ifstream;  using std::getline;
using std::string;    using std::vector;
using std::endl;

void print_hborder(int length) {
  cout << string(length + 4, '-') << endl;
}

void print_input_lines(const vector<string> *lines, int max_len) {
  for (vector<string>::const_iterator it = lines->begin(); it != lines->end(); ++it) {
    cout << "| ";
    cout << *it;
    cout << string(max_len - it->length(), ' ');
    cout << " |" << endl;
  }
}

int max_string_length(const vector<string> *strings) {
  unsigned int max_len = 0;

  for (vector<string>::const_iterator it = strings->begin(); it != strings->end(); ++it) {
    if (it->length() > max_len) {
      max_len = it->length();
    }
  }

  return max_len;
}

void print_text() {
  string line;
  vector<string> lines;
  int max_len;

  while (getline(cin, line)) {
    lines.push_back(line);
  }

  max_len = max_string_length(&lines);

  print_hborder(max_len);
  print_input_lines(&lines, max_len);
  print_hborder(max_len);
}

void print_parrot() {
  ifstream infile("parrot.txt");
  string line;

  while (getline(infile, line)) {
    cout << line << endl;
  }
}

int main() {
  print_text();
  print_parrot();

  return 0;
}

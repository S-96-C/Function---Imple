#include <iostream>
using namespace std;
// overloading
// having a function with
// different types of parameter

// no parameters
void print(); // function prototype
// 1 char[] parameter
void print(char msg[]);
// 1 integer parameter
void print(int no);

int main() {
  print();
  print("I am from SLIIT, Malabe");
  print(67);
  return 0;
}

void print() {
  cout << "Hello there " << endl;
}
void print(char  msg[]) {
  cout << msg << endl;
}

void print(int no) {
  cout << "The value is " << no << endl;
}
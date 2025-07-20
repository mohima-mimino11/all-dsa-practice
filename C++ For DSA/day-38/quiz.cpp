#include <iostream>
using namespace std;
class Student {
int id;
  public:
  Student(int x) { id = x; }
  void show() { cout << id << endl; }
};
int main() {
Student s[3];
return 0;
}
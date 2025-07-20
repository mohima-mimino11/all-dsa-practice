#include <bits/stdc++.h>
using namespace std;

class Student{
  public:
  string name;
  int roll;
  int mathMarks;
  int englishMarks;
  Student(string name, int roll, int mathMarks, int englishMarks){
    this->name = name;
    this->roll = roll;
    this->mathMarks = mathMarks;
    this->englishMarks = englishMarks;
  }
  void hello(){
    cout << "Hello from " << name << endl;
  }
  void total(){
    cout << "Total marks of " << name << " = " << mathMarks + englishMarks << endl;
  }
};
int main(){
  Student sakib("Sakib Ahmed", 23, 85, 66);
  sakib.hello();
  sakib.total();
  Student mimino("Mimino", 10, 98, 96);
  mimino.hello();
  mimino.total();
  return 0;
}
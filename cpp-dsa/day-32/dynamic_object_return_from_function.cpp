#include <bits/stdc++.h>
using namespace std;
class Student{
  public:
  int roll;
  int cls;
  double gpa;
  Student(int roll, int cls, double gpa){
    // this keyword is a pointer
    this->roll = roll; // arrow sign is used for dereferencing the pointer which could be written as (*this).roll too
    this->cls = cls;
    this->gpa = gpa;
  }
};
Student* fun(){
  Student* rahim = new Student(50, 5, 3.25); // static object
  return rahim;
}
int main(){
  Student* p = fun();
  cout << p->roll << " " << p->cls << " " << p->gpa << endl; 
  return 0;
}
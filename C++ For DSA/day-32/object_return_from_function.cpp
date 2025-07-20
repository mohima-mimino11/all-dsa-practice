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
Student fun(){
  Student rahim(50, 5, 3.25); // static object
  return rahim;
}
int main(){
  Student obj = fun();
  cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl; 
  return 0;
}
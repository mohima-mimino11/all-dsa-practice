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
int main(){
  Student rahim(50, 5, 3.20);
  Student* karim =new  Student(2, 5, 5.00);
  cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl; 
  cout << karim->roll << " " << karim->cls << " " << karim->gpa << endl; 
  

  return 0;
}
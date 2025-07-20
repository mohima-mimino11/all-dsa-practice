#include <bits/stdc++.h>
using namespace std;
class Student{
  public:
  int roll;
  int cls;
  double gpa;
  Student(int r, int c, double g){
    roll = r;
    cls = c;
    gpa = g;
  }
};
int main(){
  Student rahim(50, 5, 3.20);
  Student karim(2, 5, 5.00);
  // avoid using constructor when you have to take user input for the object values
  // rahim.roll = 50; 
  // rahim.cls = 5;
  // rahim.gpa = 3.20;
  // karim.roll = 2;
  // karim.cls = 5;
  // karim.gpa = 5.00;

  cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl; 
  cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl; 
  

  return 0;
}
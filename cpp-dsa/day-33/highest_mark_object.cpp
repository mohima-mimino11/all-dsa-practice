#include <bits/stdc++.h>
using namespace std;
class Student
{
  public:
	string name;
	int roll;
	char section;
	int math_marks;
	int cls;
  Student(string name, int roll, char section, int math_marks, int cls){
    this->name = name;
    this->roll = roll;
    this->section = section;
    this->math_marks = math_marks;
    this->cls = cls;
  }
};
int main(){
  Student a("mim", 1, 'A', 99, 8);
  Student b("Atiq", 2, 'A', 96, 8);
  Student c("Afridi", 3, 'A', 93, 8);
  if(a.math_marks > b.math_marks && a.math_marks > c.math_marks){
    cout << a.name << " " << a.math_marks << endl; 
  }
  else if(b.math_marks > a.math_marks && b.math_marks > c.math_marks){
    cout << b.name << " " << b.math_marks << endl; 
  }
  else if(c.math_marks > a.math_marks && c.math_marks > b.math_marks){
    cout << c.name << " " << c.math_marks << endl; 
  }

  return 0;
}
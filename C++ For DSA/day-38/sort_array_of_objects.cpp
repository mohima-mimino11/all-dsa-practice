#include <bits/stdc++.h>
using namespace std;
class Student{
  public:
  string name;
  int roll;
  int marks;
};
bool cmp(Student l, Student r){
  if(l.marks < r.marks){
    return true;
  }
  else{
    return false;
  }
  // return l.marks < r.marks;
  // return l.roll < r.roll;
}
int main(){
  int n;
  cin >> n;
  Student a[n];
  for(int i = 0; i < n; i++){
    cin.ignore();
    getline(cin, a[i].name);
    cin >> a[i].roll >> a[i].marks;
  }
  sort(a, a+n,cmp);
  for(int i = 0; i < n; i++){
    cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
  }

  return 0;
}
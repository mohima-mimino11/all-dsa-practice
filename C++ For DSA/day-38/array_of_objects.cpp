#include <bits/stdc++.h>
using namespace std;
class Student{
  public:
  string name;
  int roll;
  int marks;
};
int main(){
  int n;
  cin >> n;
  Student a[n];
  for(int i = 0; i < n; i++){
    cin.ignore();
    getline(cin, a[i].name);
    cin >> a[i].roll >> a[i].marks;
  }
  for(int i = 0; i < n; i++){
    cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
  }
  // cout << a[2].name << " " << a[2].roll << " " << a[2].marks << endl;


  return 0;
}
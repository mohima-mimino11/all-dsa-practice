#include <bits/stdc++.h>

using namespace std;
class Student{
  public:
  string name;
  int cls;
  char s;
  long long int id;
  int math_marks;
  int eng_marks;
};
bool cmp(Student l, Student r){
  if (l.eng_marks != r.eng_marks) {
    return l.eng_marks > r.eng_marks; // Descending order for eng_marks
  }
  if (l.math_marks != r.math_marks) {
    return l.math_marks > r.math_marks; // Descending order for math_marks
  }
  return l.id < r.id;
  
}
int main()
{
  // Write your code here
  int n;
  cin >> n;
  Student a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i].name >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
  }
  sort(a, a+n, cmp);
  for(int i = 0; i < n; i++){
    cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
  }
  return 0;
}

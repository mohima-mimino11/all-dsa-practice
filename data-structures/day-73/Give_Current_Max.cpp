#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
  string name;
  int roll;
  int marks;
  Student(string name, int roll, int marks)
  {
    this->name = name;
    this->roll = roll;
    this->marks = marks;
  }
};
class cmp
{
public:
  bool operator()( Student &l, Student &r) 
  {
    if (l.marks != r.marks)
    {
      return l.marks < r.marks;
    }
    return l.roll > r.roll;
  }
};
int main()
{
  // Write your code here
  priority_queue<Student, vector<Student>, cmp> pq;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string name;
    int roll, marks;
    cin >> name >> roll >> marks;
    Student obj(name, roll, marks);
    pq.push(obj);
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++)
  {
    int v;
    cin >> v;
    if (v == 0)
    {
      string name;
      int roll, marks;
      cin >> name >> roll >> marks;
      Student x(name, roll, marks);
      pq.push(x);
      if (pq.empty())
      {
        cout << "Empty" << endl;
      }
      else
      {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
      }
    }
    else if (v == 1)
    {
      if (pq.empty())
      {
        cout << "Empty" << endl;
      }
      else
      {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
      }
    }
    else if (v == 2)
    {
      if (!pq.empty())
      {
        pq.pop();
      }
      if (pq.empty())
      {
        cout << "Empty" << endl;
      }
      else
      {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
      }
    }
  }
  return 0;
}
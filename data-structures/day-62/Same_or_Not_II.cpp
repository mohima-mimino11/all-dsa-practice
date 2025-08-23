#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
  list<int> l;

  void push(int val)
  {
    l.push_back(val);
  }

  void pop()
  {
    if (l.empty())
    {
      return;
    }
    l.pop_back();
  }
  int top()
  {
    return l.back();
  }
  int size()
  {
    return l.size();
  }
  bool empty()
  {
    return l.empty();
  }
};

class Queue
{
public:
  list<int> l;

  void push(int val)
  {
    l.push_back(val);
  }

  void pop()
  {
    if (l.empty())
    {
      return;
    }
    l.pop_front();
  }

  int front()
  {
    return l.front();
  }

  int back()
  {
    return l.back();
  }

  int size()
  {
    return l.size();
  }

  bool empty()
  {
    return l.empty();
  }
};
int main()
{
  Stack A;
  Queue B;
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    int val;
    cin >> val;
    A.push(val);
  }
  for (int i = 0; i < m; i++)
  {
    int val;
    cin >> val;
    B.push(val);
  }

  if (A.size() != B.size())
  {
    cout << "NO" << endl;
  }
  else
  {
    bool isSame = true;
    while (!A.empty())
    {
      if (A.top() != B.front())
      {
        isSame = false;
        break;
      }
      A.pop();
      B.pop();
    }
    if (isSame && A.empty() && B.empty())
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}
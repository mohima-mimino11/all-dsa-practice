#include <bits/stdc++.h>

using namespace std;

int main()
{
  // Write your code here
  int n;
  cin >> n;
  priority_queue<int, vector<int>, greater<int>> pq;
  for (int i = 0; i < n; i++)
  {
    int val;
    cin >> val;
    pq.push(val);
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++)
  {
    int x;
    cin >> x;
    if (x == 0)
    {
      int v;
      cin >> v;
      pq.push(v);
      if (pq.empty())
      {
        cout << "Empty" << endl;
      }
      else
      {
        cout << pq.top() << endl;
      }
    }
    else if (x == 1)
    {
      if (pq.empty())
      {
        cout << "Empty" << endl;
      }
      else
      {
        cout << pq.top() << endl;
      }
    }
    else if (x == 2)
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
        cout << pq.top() << endl;
      }
    }
  }
  return 0;
}

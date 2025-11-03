#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, e;
  cin >> n >> e;
  vector<vector<int>> adjList(n); 
  while (e--)
  {
    int a, b;
    cin >> a >> b;
    adjList[a].push_back(b); // directed
  }
  int q;
  cin >> q;
  while (q--)
  {
    int src, des;
    cin >> src >> des;
    if (src == des)
    {
      cout << "YES" << endl;
      continue;
    }
    bool direct = false;
    for (int child : adjList[src])
    {
      if (child == des)
      {
        direct = true;
        break;
      }
    }
    if (direct)
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
#include <bits/stdc++.h>
using namespace std;
vector<int> adjList[1005];
int main()
{
  int n, e;
  cin >> n >> e;
  while (e--)
  {
    int a, b;
    cin >> a >> b;
    adjList[a].push_back(b);
    adjList[b].push_back(a);
  }

  int q;
  cin >> q;
  while (q--)
  {
    int node;
    cin >> node;
    set<int> neighbors; 
    for (int neigh : adjList[node])
    {
      if (neigh != node)
      {
        neighbors.insert(neigh); 
      }
    }
    if (neighbors.empty())
    {
      cout << -1 << endl;
    }
    else
    {
      
      auto it = neighbors.rbegin();
      cout << *it; 
      ++it;
      for (; it != neighbors.rend(); ++it)
      {
        cout << " " << *it;
      }
      cout << endl;
    }
  }
  return 0;
}
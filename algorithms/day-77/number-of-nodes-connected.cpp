// You will be given an undirected graph as input.
// Then you will be given a node N.
// You need to tell the number of nodes that can be visited from node N.
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, e;
  cin >> n >> e;
  vector<int> adjList[n]; // Adjacency list array.
  while (e--)
  {
    int a, b;
    cin >> a >> b;
    adjList[a].push_back(b);
    adjList[b].push_back(a); // Undirected.
  }

  int targetNode;
  cin >> targetNode;

  // BFS setup.
  vector<bool> visited(n, false); // Track visited nodes (init false).
  queue<int> q;                   // Queue for BFS.
  int count = 0;                  // Start at 0, increment on visit.

  // Start from targetNode.
  q.push(targetNode);
  visited[targetNode] = true;
  count++;

  while (!q.empty())
  {
    int u = q.front();
    q.pop();
    // Explore neighbors.
    for (int v : adjList[u])
    {
      if (!visited[v])
      {
        visited[v] = true;
        q.push(v);
        count++; // Increment for each new reachable node.
      }
    }
  }

  cout << count << endl;
  return 0;
}
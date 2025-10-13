/*
Question: You will be given an undirected graph as input. 
Then you will be given a query Q. For each query, you will be given source S and destination D. 
You need to print the shortest distance between S and D. If there is no path from S to D, print -1.
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> adjList[1005];
bool vis[1005];
int level[1005];
int parent[1005];
void bfs(int src)
{
  queue<int> q;
  q.push(src);
  vis[src] = true;
  level[src] = 0;
  while (!q.empty())
  {
    int par = q.front();
    q.pop();

    for (int child : adjList[par])
    {
      if (!vis[child])
      {
        q.push(child);
        vis[child] = true;
        level[child] = level[par] + 1;
      }
    }
  }
}
int main()
{
  int n, e;
  cin >> n >> e;
  while (e--)
  {
    int a, b;
    cin >> a >> b;
    adjList[a].push_back(b); // undirected
    adjList[b].push_back(a);
  }
  int q;
  cin >> q;
  while(q--){
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    int src, des;
    cin >> src >> des;
    bfs(src);
    cout << level[des] << endl;
  }


  return 0;
}
#include <bits/stdc++.h>
using namespace std;
char grid[1001][1001];
bool vis[1001][1001];
int n, m;
vector<pair<int, int>> moveMent = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool valid(int i, int j)
{
  if (i < 0 || i >= n || j < 0 || j >= m)
  {
    return false;
  }
  return true;
}

void dfs(int si, int sj)
{
  // cout << si << " " << sj << endl;
  vis[si][sj] = true;
  for (int i = 0; i < 4; i++)
  {
    int ci = si + moveMent[i].first;
    int cj = sj + moveMent[i].second;
    if (valid(ci, cj) && !vis[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'B'))
    {
      dfs(ci, cj);
    }
  }
}
int main()
{
  cin >> n >> m;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> grid[i][j];
  int si, sj, ei, ej;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      // cout << grid[i][j];
      if (grid[i][j] == 'A')
      {
        si = i;
        sj = j;
      }
      if (grid[i][j] == 'B')
      {
        ei = i;
        ej = j;
      }
    }
  }
  memset(vis, false, sizeof(vis));
  dfs(si, sj);
  if(vis[ei][ej] == true){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
  return 0;
}
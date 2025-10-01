#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, e;
  cin >> n >> e;
  int adjMatrix[n][n];
  // for(int i = 0; i < n; i++){
  //   for(int j=0; j < n; j++){
  //     adjMatrix[i][j] = 0;
  //   }
  // }
  // shorter way to set 0 values
  memset(adjMatrix, 0, sizeof(adjMatrix));
  // diagonal value setting
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      if (i == j)
        adjMatrix[i][j] = 1;
  }
  for (int i = 0; i < e; i++)
  {
    int a, b;
    cin >> a >> b;
    // undirected graph
    adjMatrix[a][b] = 1;
    adjMatrix[b][a] = 1;
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << adjMatrix[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
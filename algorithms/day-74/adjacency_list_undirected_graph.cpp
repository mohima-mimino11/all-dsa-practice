#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, e;
  cin >> n >> e;
  int a[n];
  vector<int> adjList[n]; // array of vector
  while(e--){
    int a, b;
    cin >> a >> b;
    // undirected graph
    adjList[a].push_back(b);
    adjList[b].push_back(a);
  }
  for(int i = 0; i < n; i++){
    cout << i << " -> ";
    for(int x: adjList[i]){
      cout << x << " ";
    }
    cout << endl;
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;
vector<int> adjList[1005];
bool vis[1005];
void bfs(int src){
  queue<int> q;
  q.push(src);
  vis[src] = true;
  while(!q.empty()){
    // pop the element of front
    int par = q.front();
    q.pop();
    // work with the element
    cout << par << " ";
    //push the children of the element
    for(int child: adjList[par]) {
      if(!vis[child]){
        q.push(child);
        vis[child] = true;
      }
    }
  }
}
int main(){
  int n, e;
  cin >> n >> e;
  while(e--){
    int a, b;
    cin >> a >> b;
    adjList[a].push_back(b);
    adjList[b].push_back(a);
  }
  bfs(0);
  memset(vis,false, sizeof(vis));
  return 0;
}
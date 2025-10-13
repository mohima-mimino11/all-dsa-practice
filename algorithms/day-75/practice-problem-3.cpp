/*
Question: You will be given an undirected graph as input. Then you will be given a node N. 
You need to print the number of nodes that are directly connected to the node N.
*/
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
  int targetNode, count=0;
  cin >> targetNode;
  for(int i = 0; i < n; i++){
    if(i == targetNode){
      for(int x:adjList[i]){
        count++;
      }
    }
  }
  cout << count ;
  return 0;
}
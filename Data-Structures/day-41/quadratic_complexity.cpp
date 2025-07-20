#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, m;
  cin >> n >> m;
  // time complexity - O(n^2)
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cout << "Hello" << endl;
    }
  }
  // time complexity - O(n * m)
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cout << "Hello" << endl;
    }
  }
  return 0;
}
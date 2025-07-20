#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  // vector<int> v(n);
  // // when vector size is initialized
  // for(int i = 0; i < n; i++){
  //   cin >> v[i];
  //   cout << v[i] << " ";
  // }
  vector<int> v2;
  // when vector size is not initialized
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    v2.push_back(x);
    cout << v2[i] << " ";
  }

  return 0;
}
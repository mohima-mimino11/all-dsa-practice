#include <bits/stdc++.h>
using namespace std;
int main()
{

  int n;
  cin >> n;
  vector<int> v(n);
  // O(n)
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  vector<int> pre(n);
  pre[0] = v[0];
  for(int i = 1; i < n; i++){
    pre[i] = pre[i-1] + v[i];
  }
  // for(int i = 0; i < n; i++){
  //   cout << pre[i] << " ";
  // }
  // cout << endl;
  vector<int> suf(n);
  suf[n-1] = v[n-1];
  for(int i = n - 2; i >= 0; i--){
    suf[i] = suf[i+1] + v[i];
  }
  // for(int i = 0; i < n; i++){
  //   cout << suf[i] << " ";
  // }
  // cout << endl;
  for(int i = 0; i < n; i++){
    if(pre[i] == suf[i]){
      cout << i << " ";
      break;
    }
  }
  // time complexity- O(N)
  return 0;
}
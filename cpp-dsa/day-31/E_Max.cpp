#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int a[n];
  int max_val = INT_MIN;
  for(int i = 0; i < n; i++){
    cin >> a[i];
    max_val = max(a[i], max_val);
  }
  cout << max_val << endl;
  return 0;
}
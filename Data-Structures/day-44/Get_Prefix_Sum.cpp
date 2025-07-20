#include <bits/stdc++.h>

using namespace std;



int main()
{
  // Write your code here
  int n;
  cin >> n;
  vector<long long int> a(n);
  for(int i = 0; i < n; i++){ // O(N)
    cin >> a[i];
  }
  vector<long long int> pre(n);
  pre[0] = a[0]; // O(1)
  for(int i = 1; i < n; i++){ // O(N)
    pre[i] = pre[i-1] + a[i];
  }
  sort(pre.begin(), pre.end(), greater<long long int>()); // O(NlogN)
  for(int i = 0; i < n; i++){
    cout << pre[i] << " ";
  }
  cout << endl;

  return 0;
}

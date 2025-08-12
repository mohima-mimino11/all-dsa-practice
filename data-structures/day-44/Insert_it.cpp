#include <bits/stdc++.h>

using namespace std;



int main()
{
  // Write your code here
  int n, m, x;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++){ // O(n)
    cin >> a[i];
  }
  cin >> m;
  vector<int> b(m);
  for(int i = 0; i < m; i++){ // O(m)
    cin >> b[i];
  }
  cin >> x;
  a.insert(a.begin()+x, b.begin(), b.end());//O(n)
  for(int i = 0; i < n + m; i++){ // O(n)
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}

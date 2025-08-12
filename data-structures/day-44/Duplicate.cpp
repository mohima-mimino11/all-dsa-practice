#include <bits/stdc++.h>

using namespace std;



int main()
{
  // Write your code here
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++){ // O(N)
    cin >> a[i];
  }
  sort(a.begin(), a.end()); // O(NlogN)
  int flag = 0;
  for(int i = 0; i < n - 1; i++){ // O(N)
    if(a[i] == a[i+1]){
      flag = 1;
      break;
    }
  }
  if(flag == 1){
    cout << "YES" << endl;
  }
  else{
    cout << "NO" << endl;
  }
  return 0;
}

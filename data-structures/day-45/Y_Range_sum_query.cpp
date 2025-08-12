#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, q;
  cin >> n >> q;
  vector<long long int> a(n+1);
  for(long long int i = 1; i <= n; i++){
    cin >> a[i];
  }
  vector<long long int> pre(n+1);
  pre[1] = a[1];
  for(long long int i = 2; i <=n; i++){
    pre[i] = pre[i - 1] + a[i];
  }

// Time Complexity- O(N)
  while(q--){
    long long int l, r;
    cin >> l >> r;
    long long int sum;
    if(l == 1){
      sum = pre[r];
    }else{
      sum = pre[r] - pre[l-1];
    }
    cout << sum << endl;
  }
  
  //Time Complexity- O(Q * N)
  // while(q--){
  //   int l, r;
  //   cin >> l >> r;
  //   int sum = 0;
  //   for(int i = l; i <= r; i++){
  //     sum += a[i];
  //   }
  //   cout << sum << endl;
  // }

  
  return 0;
}
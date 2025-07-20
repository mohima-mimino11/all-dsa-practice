#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int sum = 0;
  for(int i = 0; i < n; i++){// O(1) Space complexity
    sum += i;
  }
  cout << sum << endl;
  int a[n];
  for(int i = 0; i < n; i++){ // O(N)
    cin >> a[i];
  }
  int b[n][n];// O(N * N)

  return 0;
}
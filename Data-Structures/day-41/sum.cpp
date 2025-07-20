#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int sum = 0;
  // using loop -- time complexity O(n)
  // for(int i = 1; i <= n; i++){
  //   sum += i;
  // }
  // using formula -- time complexity-- O(1)
  sum = (n*(n+1))/2;
  cout << sum << endl;
  return 0;
}
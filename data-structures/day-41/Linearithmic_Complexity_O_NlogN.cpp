#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  // time complexity - O(nlogn)
  for(int i = 1; i <= n; i++){ // O(n)
    for(int j = 1; j <= n; j*=2){ // O(logn)
      cout << "Hello" << endl;
    }
  }
  return 0;
}
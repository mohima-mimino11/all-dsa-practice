#include <bits/stdc++.h>
using namespace std;
int main(){
  // time complexity-> O(logN)
  int n;
  cin >> n;
  for(int i = 1; i <= n; i *= 2){
    cout << i << endl;
  }
  return 0;
}
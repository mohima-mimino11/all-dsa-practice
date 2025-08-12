// #include <iostream>
// #include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, b;
  cin >> a >> b;

  cout << min(a,b) << endl;
  cout << min({2, 5, 345, 32, 0}) << endl;
  cout << max(a,b) << endl;
  cout << max({2, 5, 345, 32, 0}) << endl;
  swap(a, b);
  cout << a << " " << b << endl;
  return 0;
}
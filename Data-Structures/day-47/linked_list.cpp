#include <bits/stdc++.h>
// #include <cstdint> // for uintptr_t
using namespace std;
int main(){
  int a[5] = {1,2,3,4,5};
  cout << (long long int)&a[2] << " " << (long long int)&a[3] << endl;
  vector<int> v = {1,2,3,4,5};
  cout << (long long int)&v[2] << " " << (long long int)&v[3] << endl;
  return 0;
}
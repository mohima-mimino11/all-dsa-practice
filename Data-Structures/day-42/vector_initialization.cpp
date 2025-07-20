#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v; // type 1
  vector<int>v2(5); // type 2
  vector<int>v3(5, -1); // type 3
  vector<int>v4 (v3); // type 4
  int a[5] = {1, 2, 3,4, 5};
  vector<int> v5(a, a+5); // type 5
  vector<int> v6 = {1, 2, 3}; // type 6
  for(int i = 0; i < v6.size(); i++){
    cout << v6[i] << " ";
  }
  cout << endl;
  cout << v6.size() << endl;
  return 0;
}
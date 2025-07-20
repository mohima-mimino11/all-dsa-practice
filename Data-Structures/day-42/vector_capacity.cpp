#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v;
  // cout << v.max_size() << endl;
  // cout << v.capacity() << endl;
  // v.push_back(10);
  // cout << v.capacity() << endl;
  // v.push_back(10);
  // cout << v.capacity() << endl;
  // v.push_back(10);
  // cout << v.capacity() << endl;
  // v.push_back(10);
  // cout << v.capacity() << endl;
  // v.push_back(10);
  // cout << v.capacity() << endl;
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  v.resize(7, 50);
  for(int i = 0 ; i < v.size(); i++){
    cout << v[i] << " ";
  }
  cout << endl;
  v.clear();
  v.push_back(66);
  cout << v.size() << endl;
  cout << v[0] << endl;

  return 0;
}
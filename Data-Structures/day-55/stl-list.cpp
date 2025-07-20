#include <bits/stdc++.h>
using namespace std;
int main(){
  // list<int> l;
  // cout << l.size() << endl;
  // list<int> l2(10,4);
  // cout << *l.begin() << endl;
  // for(auto it = l2.begin(); it != l2.end(); it++){
  //   cout << *it << endl;
  // }
  // list <int> l3 = {1, 2, 4, 5, 8};
  // list<int>l4(l3);
  // for(int val:l4){
  //   cout << val << endl;
  // }

  // int a[] = {4, 8, 9};
  // list<int>l5(a, a+3);
  // for(int val : l5){
  //   cout << val << endl;
  // }  
  vector<int> b = {33, 89,99};
  list<int>l6(b.begin(), b.end());
  // l6.clear();
  l6.resize(5, 70);
  cout << l6.size() << endl;
  if(l6.empty()){
    cout << "empty";
  }
  for(int val : l6){
    cout << val << endl;
  }
  return 0;
}
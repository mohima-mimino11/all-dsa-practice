#include <bits/stdc++.h>
using namespace std;
void printListForward(list<int> l){
  for(int val: l){
    cout << val << " ";
  }
  cout << endl;
}

int main(){
  list<int> l;
  int val;
  while(1){
    cin >> val;
    if(val == -1){
      break;
    }
    l.push_back(val);
  }
  l.sort();
  printListForward(l);
  return 0;
}
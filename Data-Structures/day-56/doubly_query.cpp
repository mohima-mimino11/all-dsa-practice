#include <bits/stdc++.h>
using namespace std;
void printListForward(list<int> l){
  for(int val: l){
    cout << val << " ";
  }
  cout << endl;
}


void printListBackward(list<int> l){
  l.reverse();
  for(int val: l){
    cout << val << " ";
  }
  cout << endl;
}
int main(){
  list<int> l;
  int q;
  cin >> q;
  while(q--){
    int x,v;
    cin >> x >> v;
    int listSize = l.size();
    if(x < 0 || x > listSize){
      cout << "Invalid" << endl;
    }else if(x == listSize){
      l.push_back(v);
      printListForward(l);
      printListBackward(l);
    }else if(x == 0){
      l.push_front(v);
      printListForward(l);
      printListBackward(l);
    }else{
      auto it = next(l.begin(), x);
      l.insert(it, v);
      printListForward(l);
      printListBackward(l);
    }

  }
  
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
  list<int> l = {2, 4, 6, 10};
  // list<int> l2;
  // l2 = l;
  // l2.assign(l.begin(), l.end());
  l.push_back(8); // insert at tail
  l.push_front(10); // insert at head
  l.pop_back(); // delete from tail
  l.pop_back();
  l.pop_front(); //  delete from head

  list<int> l2 = {1, 3, 6,};
  // cout << *next(l2.begin(),2)<< endl;
  l2.insert( next(l2.begin(),2), l.begin(), l.end());
  for(int val: l2){
    cout << val << " ";
  }
  cout << endl;
  return 0;
}
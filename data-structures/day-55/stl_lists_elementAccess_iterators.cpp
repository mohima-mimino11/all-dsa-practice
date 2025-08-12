#include <bits/stdc++.h>
using namespace std;
int main(){
  list<int> l = {10, 20, 30, 40, 90};
  cout<< l.back() << endl;
  cout<< l.front() << endl;
  cout << *next(l.begin(), 2) << endl;
  cout << *l.begin() << endl;
  cout<< l.back() << endl;

  // cout << *l.end()+1 << endl; // use l.back cause end pointer refers to it's next pointer in a linkedlist which has no value assigned in it.

  return 0;
}
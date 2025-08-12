#include <bits/stdc++.h>
using namespace std;
int main(){
  list<int> l = {10, 20, 30, 40, 50, 60, 60, 70, 20};
  // l.remove(60);
  // l.sort();
  // l.sort(greater<int>());
  // l.unique();//Deletes the duplicate values from the list. You must sort the list first.
  l.reverse();
  for(int val : l){
    cout << val << " ";
  }
  cout << endl;
  return 0;
}
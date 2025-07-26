#include <bits/stdc++.h>

using namespace std;

int main()
{
  // Write your code here
  list<int> l;
  while(1){
    int v;
    cin >> v;
    if(v == -1){
      break;
    }
    l.push_back(v);
  }
  l.sort();
  l.unique();
  for(int v: l){
    cout << v << " ";
  }
  cout << endl;
  return 0;
}

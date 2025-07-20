#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  cout << s[3] << endl;
  cout << s.at(1) << endl;
  cout << s[s.size() - 1] << endl; // prints last index
  cout << s.back() << endl; // prints last index
  cout << s.front() << endl; // prints first index
  return 0;
}
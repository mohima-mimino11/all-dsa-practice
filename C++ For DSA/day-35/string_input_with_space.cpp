#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  int x;
  cin >> x;
  // cin >> s;
  cin.ignore(); // prevent getline from taking enter as input 
  getline(cin, s);
  cout << x << endl;
  cout << s << endl;
  return 0;
}
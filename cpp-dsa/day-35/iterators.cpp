#include <bits/stdc++.h>
using namespace std;
int main(){
  string s = "ADAAAA";
//   s.begin() -> pointer to the first element.
// s.end() -> pointer to the next element after the last element of the string.
  // cout << *s.begin() << endl; 
  // cout << *(s.end()-1) << endl; 
  // for(int i = 0; i < s.size(); i++){
  //   cout << s[i] << endl;
  // }
  // string::iterator can be written as "auto" in newer versions
  // for(string::iterator i=s.begin(); i < s.end(); i++){
  //   cout << *i << endl;
  // }
  for(auto i=s.begin(); i < s.end(); i++){
    cout << *i << endl;
  }
  return 0;
}
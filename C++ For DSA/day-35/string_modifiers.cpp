#include <bits/stdc++.h>
using namespace std;
int main(){
  string s = "Hello There!";
  string s2 = "hey, hey! Sing Woo-San!";
  // string append
  // s += s2;
  // s.append(s2);
  //  add character to the last of the string.
  // s.push_back('A');
  // remove the last character of the string
  // s.pop_back();
  // s.pop_back();
  // string assign
  // s = "Gello";
  // s = s2;
  // s.assign(s2);
  // erase characters from the string
  // s.erase(5,3);
  //  replace a portion of the string.
  // s.replace(5,6, "Bangladesh");
  // s.replace(5,0, "Bangladesh");
//  insert a portion to a specific position.
  s.insert(5, "Mimino");
  cout << s << endl;
  return 0;
}
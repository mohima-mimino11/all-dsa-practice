#include <bits/stdc++.h>
using namespace std;
int main(){
  string s = "Hello World "; // string is a class in c++

  cout << s << endl;  
  cout << s.size() << endl;  
  cout << s.max_size() << endl;  
  cout << s.capacity() << endl;  
  if(s.empty() == true){
    cout << "Empty" << endl;
  }
  else{
    cout << "Not Empty" << endl;
  }
  // s.clear();
  // cout << s.size() << endl;
  // if(s.empty() == true){
  //   cout << "Empty" << endl;
  // }
  // else{
  //   cout << "Not Empty" << endl;
  // }
  // s.resize(3);
  // cout << s << endl;
  s.resize(16, 'x');
  cout << s << endl;
  return 0;
}
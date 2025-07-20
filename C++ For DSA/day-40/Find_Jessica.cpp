#include <bits/stdc++.h>

using namespace std;

int main()
{
  // Write your code here
  string s;
  getline(cin, s);
  stringstream ss(s); 
  string word;
  bool findWord = false;
  while (ss >> word) {
    if (word == "Jessica") {
      findWord = true;
      break;
    }
  }
  if(findWord == true){
    cout << "YES" << endl;
  }
  else{
    cout << "NO" << endl;
  }
  return 0;
}


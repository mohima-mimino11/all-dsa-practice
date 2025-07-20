#include <bits/stdc++.h>
using namespace std;
int main(){
  char c;
  cin >> c;
  if((int)c >= 65 && (int)c <= 90){
    cout << "ALPHA" << endl << "IS CAPITAL" << endl; 
  }
  else if((int)c >= 97 && (int)c <= 122){
    cout << "ALPHA" << endl << "IS SMALL" << endl; 
  }
  else if((int)c >= 48 && (int)c <= 57){
    cout << "IS DIGIT" << endl;
  }
  return 0;
}
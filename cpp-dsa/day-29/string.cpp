#include <iostream>
using namespace std;
int main(){
  int x;
  cin >> x;
  cin.ignore(); // to ignore the enter pressed that clashes with getline() string input function.
  char s[100];
  cin.getline(s, 100);
  cout << x << endl << s << endl;
  string st;
  cin >> st;
  cout << st << endl;
  return 0;
}
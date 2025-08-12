#include <iostream>
using namespace std;
int main(){
  int x;
  char c;
  double d;
  cin >> x >> c >> d;
  cout << x << " " << c << endl << d << endl;
  char a = 'B';
  int ascii = a;
  cout << ascii << endl;
  char sm = 'b';
  cout << (int)sm << endl; //typecasting 
  int y = 99;
  cout << (char)y << endl;
  return 0;
}
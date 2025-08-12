#include <bits/stdc++.h>
using namespace std;
void fun(int* &p){
  // *p = 100;
  int y = 200;
  p = &y;
  cout << "In fun: " << *p << endl;
  cout << "In fun: " << &p << endl;

}
int main(){
  int x = 10;
  int* p = &x;
  cout << "In main: " << *p << endl;

  fun(p);
  cout << "In main: " << *p << endl;
  cout << "In main: " << &p << endl;
  
  return 0;
}
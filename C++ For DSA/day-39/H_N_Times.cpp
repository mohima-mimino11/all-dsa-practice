#include <bits/stdc++.h>
using namespace std;
void printChar(){
  int n;
  char c;
  cin >> n >> c;
  for(int i = 0; i < n; i++){
    cout << c << " ";
  }
  cout << endl;
}
int main(){
  int tc;
  cin >> tc;
  while(tc--){
    printChar();
  }
  return 0;
}
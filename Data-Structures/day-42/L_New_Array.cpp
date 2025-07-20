#include <bits/stdc++.h>
using namespace std;
void printArray(int n){
  vector<int> a(n);
  vector<int> b(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  for(int i = 0; i < n; i++){
    cin >> b[i];
  }
  b.insert(b.begin()+n,a.begin(), a.end());
  for(int x : b){
    cout << x << " ";
  }
  cout << endl;
}
int main(){
  int n;
  cin >> n;
  printArray(n);
  return 0;
}
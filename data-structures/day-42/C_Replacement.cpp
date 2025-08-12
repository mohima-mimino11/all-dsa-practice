#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<long long int> a(n);
  for(long long int i = 0; i < n; i++){
    cin >> a[i];
    if(a[i] > 0){
      a[i] = 1;
    }
    else if(a[i] < 0){
      a[i] = 2;
    }
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}
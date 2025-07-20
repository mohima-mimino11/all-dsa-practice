#include <bits/stdc++.h>
using namespace std;
int main(){
  int tc;
  cin >> tc;
  while(tc--){
    int n;
    cin >> n;
    int a[n];
    int evenCnt = 0, oddCnt = 0;
    for(int i = 0; i < n; i++){
      cin >> a[i];
      if(a[i] % 2 == 0){
        evenCnt++;
      }else{
        oddCnt++;
      }
    }
    if(n % 2 != 0){
      cout << "-1" << endl;
    }else if(evenCnt == oddCnt){
      cout << "0" << endl;
    }else{
      cout << abs(evenCnt - oddCnt) / 2 << endl;
    }
  }
  return 0;
}
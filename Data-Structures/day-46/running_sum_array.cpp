#include <bits/stdc++.h>
using namespace std;
void getRunningSumArray(int n,vector <int>& a){
  vector<int> runningSum(n+1);
  runningSum[0] = a[0];
  for(int i = 1; i <= n; i++){
    runningSum[i] = runningSum[i-1] + a[i];
  }
  for(int i = 0; i < n; i++){
     cout << runningSum[i] << " "; 
  }
  
}
int main(){
  int n;
  cin >> n;
  vector<int> array(n);
  for(int i = 0; i < n; i++){
    cin >> array[i];
    // cout << array[i] << " ";
  }
  // cout << endl;
  getRunningSumArray(n,array);
  // Time Complexity - O(N)
  return 0;
}
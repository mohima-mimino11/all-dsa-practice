#include <bits/stdc++.h>

using namespace std;



int main()
{
  // Write your code here
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){ //O(N^2)
    for(int j = 0; j < n; j++){
      // for middle row
      if(i == n / 2 && j == n / 2){
        cout << 'X';
      }
      // for same row and column index
      else if(i == j){
        cout << '\\';
      }
      // for a single row when row and column index sums input size index forward slash printing after n - 2 spaces
      else if(i+j == n - 1){
        cout << '/';
      }
      else{
        cout << " ";
      }
    }
    // newline after a row is finished
    cout << endl;
  }
  return 0;
}

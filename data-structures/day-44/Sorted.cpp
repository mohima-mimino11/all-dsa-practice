#include <bits/stdc++.h>

using namespace std;



int main()
{
  // Write your code here
  int t;
  cin >> t;
  while(t--){ // O(t)
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){ // O(n)
      cin >> a[i];
    }
    int flag = 0;
    for (int i = 0; i < n - 1; i++) // O(n)
    {
      if (a[i] > a[i + 1]) // ascending order mismatch
      {
          flag = 1;
          break;
      }
    }
    if(flag == 0){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }

  }
  return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
  long long int n;
  cin >> n;
  vector<long long int> a(n);
  vector<long long int> freq(1001, 0);
  long long int count = 0;
  for(long long int i = 0; i < n; i++){
    cin >> a[i];
    freq[a[i]]++;
  }
  for (long long int i = 0; i < a.size(); i++) {
    if (find(a.begin(), a.end(), a[i] + 1) != a.end()) {
        count++;
    }
  }
  cout << count << endl;
  //time complexity - O(N)
  return 0;
}
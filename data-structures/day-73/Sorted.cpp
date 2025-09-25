#include <bits/stdc++.h>

using namespace std;

int main()
{
  // Write your code here
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    set<int> st;
    for(int i = 0; i < n; i++){
      int val;
      cin >> val;
      st.insert(val);
    }

    for(auto it = st.begin(); it != st.end(); it++){
      cout << *it << " ";
    }
    cout << endl;
  }

  return 0;
}

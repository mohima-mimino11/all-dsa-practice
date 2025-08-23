#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  stack<int> st;
  queue<int> q;
  cin >> n;
  for(int i = 1; i <= n; i++){
    int val;
    cin >> val;
    st.push(val);
  }
  cin >> m;
  for(int i = 1; i <= m; i++){
    int val;
    cin>> val;
    q.push(val);
  }
  if(q.front() == st.top() && q.size() == st.size()){
    cout << "YES";
  }else{
    cout << "NO";
  }
  return 0;
}
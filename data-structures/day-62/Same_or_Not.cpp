#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  stack<int> st;
  queue<int> q;
  cin >> n >> m;

  for(int i = 0; i < n; i++){
    int val;
    cin >> val;
    st.push(val);
  }
  for(int i = 0; i < m; i++){
    int val;
    cin>> val;
    q.push(val);
  }
  if(st.size() != q.size()){
    cout << "NO";
  }else{
    bool isSame = true;
    while(!st.empty()){
      if(q.front() != st.top()){
        isSame = false;
        break;
      }
      st.pop();
      q.pop();
    }

    if(isSame && st.empty() && q.empty()){
      cout << "YES";
    }else{
      cout << "NO";
    }
  }
  return 0;
}
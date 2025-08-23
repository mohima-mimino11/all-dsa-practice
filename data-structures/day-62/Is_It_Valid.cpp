#include <bits/stdc++.h>

using namespace std;

int main()
{
  // Write your code here
  int tc;
  cin >> tc;
  while(tc--){
    string s;
    cin>>s;
    stack<char> st;
    for(char c:s){
      if(st.empty()){
        st.push(c);
      }else if(!st.empty() && st.top() == '0' && c == '1'){
        st.pop();
      }else if(!st.empty() && st.top() == '1' && c == '0'){
        st.pop();
      }else{
        st.push(c);
      }
    }
    if(st.empty()){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  }
  return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
  // Write your code here
  int tc;
  cin >> tc;
  while(tc--){
    string s, x;
    cin >> s >> x;
    while(1){
      int index = s.find(x);
      if(index != -1){
        s.replace(index, x.size(), "#");
      }
      else{
        break;
      }
    }
    cout << s << endl;

  }


  return 0;
}

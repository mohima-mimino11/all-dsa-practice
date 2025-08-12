#include <bits/stdc++.h>

using namespace std;

int main()
{
  // Write your code here
  list<string> browserHistory;
  string name;
  while(cin >> name && name != "end") 
    browserHistory.push_back(name);

  int q;
  cin >> q;
  auto current = browserHistory.begin();
  while(q--){
    string cmd;
    cin >> cmd;
    if(cmd == "visit"){
      string siteName;
      cin >> siteName;

      auto isFound = find(browserHistory.begin(), browserHistory.end(), siteName);

      if(isFound != browserHistory.end()){
        cout << *isFound << endl;
        current = isFound;
      }else{
        cout << "Not Available" << endl;
      }
      
    }else if(cmd == "next"){
      if(next(current) != browserHistory.end()){
        current = next(current);
        cout << *current << endl;
      }else{
        cout << "Not Available" << endl;
      }
    }else if(cmd == "prev"){
      if(current == browserHistory.begin()){
        cout << "Not Available" << endl;
      }else{
        current = prev(current);
        cout << *current << endl;
      }
    }
  }
  return 0;
}

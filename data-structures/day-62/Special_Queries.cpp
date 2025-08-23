#include <bits/stdc++.h>

using namespace std;

int main()
{
  // Write your code here
  int query;
  queue<string> q;
  cin >> query;
  while(query--){
    int command;
    cin >> command;
    if(command == 0 ){
      string name;
      cin >> name;
      q.push(name);
    }else if(command == 1){
      if(q.empty()){
        cout << "Invalid" << endl;
      }else{
        cout << q.front() << endl;
        q.pop();
      }
    }
  }
  return 0;
}

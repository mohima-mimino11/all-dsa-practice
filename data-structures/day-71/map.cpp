#include <bits/stdc++.h>
using namespace std;
int main(){
  map<string, int> mp;
  mp["tamim"] = 2;
  mp["ramim"] = 3; // O(logN)
  mp["jamim"] = 20;
  mp["hamim"] = 0;

  for(auto it = mp.begin(); it != mp.end(); it++){ // O(NlogN)
    cout << it->first << " " << it->second << endl;
  }

  if(mp.count("hamim")){
    cout << "YES";
  }else{
    cout << "NO";
  }
  return 0;
}
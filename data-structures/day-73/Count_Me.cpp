#include <bits/stdc++.h>

using namespace std;

int main()
{
  // Write your code here
  int t;
  cin >> t;
  cin.ignore();
  while (t--)
  {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    map<string, int> mp;
    int mx = 0;
    string maxFindWord;
    while(ss>>word){ // NlogN
      mp[word]++;
      if(mp[word] > mx){
        mx = mp[word];
        maxFindWord = word;
      }
    }
    cout << maxFindWord << " " << mx << endl;
  }
  return 0;
}

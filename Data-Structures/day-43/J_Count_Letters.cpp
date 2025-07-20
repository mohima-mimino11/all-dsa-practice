#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  vector< int> freq(26, 0);
  cin >> s;
  // sort(s.begin(), s.end());
  for(int i = 0; i < s.size(); i++){
    if(s[i] != ' '){
      freq[s[i] - 'a']++;
  
    }
  }
  for (int i = 0; i < 26; i++)
  {
    if (freq[i] > 0)
    {
      cout << (char)(i+'a') << " : " << freq[i] << endl;
      
    }
  }
 //TIME COMPLEXITY- O(N)
  return 0;
}
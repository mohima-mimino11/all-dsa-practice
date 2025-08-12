#include <bits/stdc++.h>
using namespace std;
int main()
{
  int tc;
  cin >> tc;
  for (int t = 0; t < tc; t++)
  {
    string s1, s2;
    cin >> s1 >> s2;
    int i = 0, j = 0;
    string result = "";
    int maxLength = max(s1.size(), s2.size());

    for (int i = 0; i < maxLength; ++i)
    {
      if (i < s1.size())
        result += s1[i];
      if (i < s2.size())
        result += s2[i];
    }

    cout << result << endl;
    
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int tc;
  cin >> tc;
  for (int t = 0; t < tc; t++)
  {
    string s;
    cin >> s;
    int count = 0;
    if (s.size() <= 10)
    {
      cout << s << endl;
    }
    else
    {
      for (int i = 0; i < s.size(); i++)
      {
        if (s[i] != *s.end())
        {
          count++;
        }
      }
      cout << *s.begin() << count - 2 << *(s.end() - 1) << endl;
    }
  }

  return 0;
}
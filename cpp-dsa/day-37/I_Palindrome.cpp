#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  int l = 0, r = s.size() - 1, pal = 1;
  while (l < r)
  {
    if (s[l] != s[r])
    {
      pal = 0;
      break;
    }
    l++;
    r--;
  }
  if (pal == 1)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
  return 0;
}
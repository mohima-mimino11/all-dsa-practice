#include <bits/stdc++.h>
using namespace std;
int main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
    string s;
    cin >> s;
    int first_sum = (int)s[0] + (int)s[1] + (int)s[2];
    int last_sum = (int)s[3] + (int)s[4] + (int)s[5];
    if (first_sum == last_sum)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}
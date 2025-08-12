#include <bits/stdc++.h>
using namespace std;
int main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
    int n;
    cin >> n;
    char s[n];
    cin >> s;
    int freq[26] = {0};
    for (int i = 0; i < n; i++)
    {
      freq[s[i] - 'A']++;
    }
    int cnt = 0;
    for (int i = 0; i < 26; i++)
    {
      if (freq[i] > 0)
      {
        cnt += freq[i] + 1;
      }
    }
    cout << cnt << endl;
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int l = 0, r = n - 1;
  bool pal = true;
  while (l < r)
  {
    if (l == r)
    {
      break;
    }
    if (a[l] != a[r])
    {
      pal = false;
      break;
    }
    l++;
    r--;
  }
  if (pal == true)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
  return 0;
}
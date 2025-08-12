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
  while (l < r)
  {
    swap(a[l], a[r]);
    l++;
    r--;
  }

  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}
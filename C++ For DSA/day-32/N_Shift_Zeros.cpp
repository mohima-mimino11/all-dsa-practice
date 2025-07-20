#include <bits/stdc++.h>
using namespace std;
void ZeroesInEnd(int a[], int n)
{
  int counter = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == 0)
    {
      counter++;
    }
    else
    {
      cout << a[i] << " ";
    }
  }
  for (int i = 1; i <= counter; i++)
  {
    cout << 0 << " ";
  }
  cout << endl;
}
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  ZeroesInEnd(a, n);
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  long long int a[n];
  long long int min_val = INT_MAX;
  for (long long int i = 0; i < n; i++)
  {
    cin >> a[i];
    min_val = min(a[i], min_val);
  }
  int counter = 0;
  for (long long int i = 0; i < n; i++)
  {
    if (a[i] == min_val)
    {
      counter++;
    }
  }
  if (counter % 2 != 0)
  {
    cout << "Lucky" << endl;
  }
  else
  {
    cout << "Unlucky" << endl;
  }

  return 0;
}
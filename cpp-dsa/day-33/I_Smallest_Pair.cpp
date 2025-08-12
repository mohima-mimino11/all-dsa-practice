#include <bits/stdc++.h>
using namespace std;
int main()
{
  int tc;
  cin >> tc;
  for (int t = 0; t < tc; t++)
  {
    int n;
    cin >> n;
    long long int a[n];
    for (long long int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    int min_sum = INT_MAX;
    for (long long int i = 0; i < n; i++)
    {
      for (long long int j = i + 1; j < n; j++)
      {
        int arr_sum = a[i] + a[j] + j - i;
        min_sum = min(arr_sum, min_sum);
      }
    }
    cout << min_sum << endl;
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  long long int a[n];
  long long int min_val_idx = 0;
  long long int max_val_idx = 0;
  for (long long int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (long long int i = 1; i < n; i++)
  {
    if (a[i] < a[min_val_idx])
    {
      min_val_idx = i;
    }
    if (a[i] > a[max_val_idx])
    {
      max_val_idx = i;
    }
  }
  // cout << a[min_val_idx] << " " << a[max_val_idx] << endl;
  long long int temp = a[min_val_idx];
  a[min_val_idx] = a[max_val_idx];
  a[max_val_idx] = temp;
  for (long long int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}
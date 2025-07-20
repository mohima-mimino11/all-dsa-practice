#include <bits/stdc++.h>
using namespace std;
int main()
{
  // Write your code here
  int n;
  cin >> n;
  long long int a[n];
  for (long long int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  // ascending sort
  sort(a, a + n);
  for (long long int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
  // descending sort
  sort(a, a + n, greater<long long int>());
  for (long long int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}

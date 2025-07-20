#include <bits/stdc++.h>
using namespace std;

long long int *sort_it(int n)
{
  long long int *a = new long long int[n];
  for (long long int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  // descending sort
  sort(a, a + n, greater<long long int>());
  return a;
}
int main()
{
  // Write your code here
  int n;
  cin >> n;
  long long int *a = sort_it(n);
  for (long long int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}

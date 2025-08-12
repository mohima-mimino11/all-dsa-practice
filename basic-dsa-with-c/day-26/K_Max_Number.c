#include <stdio.h>
long long int find_max(long long int a[], int i, int n)
{
  if (i == n - 1)
  {
    return a[i];
  }

  long long int max = find_max(a, i + 1, n);
  if (a[i] > max)
  {
    return a[i];
  }
  else
  {
    return max;
  }

  return max;
}
int main()
{
  int n;
  scanf("%d", &n);
  long long int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%lld", &a[i]);
  }
  long long int max_val = find_max(a, 0, n);
  printf("%lld\n", max_val);
  return 0;
}
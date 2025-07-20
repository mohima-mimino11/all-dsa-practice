#include <stdio.h>
long long int find_sum(long long int a[], int i, int n)
{
  if (i == n)
  {
    return 0;
  }
  long long int sum = a[i] + find_sum(a, i + 1, n);
  return sum;
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
  long long int sum_val = find_sum(a, 0, n);
  printf("%lld\n", sum_val);
  return 0;
}
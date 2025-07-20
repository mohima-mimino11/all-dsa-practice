#include <stdio.h>
int main()
{
  int n, k;
  scanf("%d %d", &n, &k);
  long long int a[n];

  for (long long int i = 0; i < n; i++)
  {
    scanf("%lld", &a[i]);
  }
  long long int max_sum = 0;
  for (long long int i = 0; i < n; i++)
  {
    for (long long int j = i + 1; j < n; j++)
    {
      if (a[i] < a[j])
      {
        long long int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  for (long long int i = 0; i < k; i++)
  {
    if (a[i] > 0)
    {
      max_sum += a[i];
    }
  }
  printf("%lld\n", max_sum);
  return 0;
}
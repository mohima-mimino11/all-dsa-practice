#include <stdio.h>
#include <stdbool.h>
bool isLucky(int n)
{
  while (n > 0)
  {
    int digit = n % 10;
    if (digit != 4 && digit != 7)
    {
      return false;
    }
    n = n / 10;
  }
  return true;
}
int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    if (isLucky(i) && n % i == 0)
    {
      printf("YES\n");
      return 0;
    }
  }
  printf("NO\n");

  return 0;
}
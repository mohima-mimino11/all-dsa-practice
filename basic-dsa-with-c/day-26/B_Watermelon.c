#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  if (n > 2)
  {
    if (n % 2 == 0)
    {
      printf("YES\n");
    }
    else
    {
      printf("NO\n");
    }
  }
  else
  {
    printf("NO\n");
  }
  return 0;
}
#include <stdio.h>

int main()
{
  int a = 4, b = 2, sum = 0;

  for (int i = 1; i <= a; i++)
  {
    if (i % b == 0)
    {
      sum += i * 2;
    }
    else
    {
      sum += i;
    }
  }

  printf("%d\n", sum);
  return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int tc;
  scanf("%d", &tc);
  for (int t = 1; t <= tc; t++)
  {
    long long int m;
    int a, b, c;
    scanf("%lld %d %d %d", &m, &a, &b, &c);
    if (m % (a * b * c) == 0)
    {
      printf("%lld\n", m / (a * b * c));
    }
    else if (m % (a * b * c) != 0)
    {
      printf("-1\n");
    }
    else if (m == 0)
    {
      printf("0\n");
    }
  }

  return 0;
}
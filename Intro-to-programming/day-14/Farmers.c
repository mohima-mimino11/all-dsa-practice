#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int tc;
  scanf("%d", &tc);
  for (int t = 0; t < tc; t++)
  {
    double m1, m2, d;
    scanf("%lf %lf %lf", &m1, &m2, &d);
    double days_needed = (m1 * d) / (m1 + m2);
    double reduce_days = d - days_needed;
    if (reduce_days - (int)reduce_days == 0)
    {
      printf("%d\n", (int)reduce_days);
    }
    else
    {
      printf("%d\n", (int)reduce_days + 1);
    }
  }

  return 0;
}

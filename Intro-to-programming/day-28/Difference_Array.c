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
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &a[i]);
      b[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        if (b[i] > b[j])
        {
          int temp = b[i];
          b[i] = b[j];
          b[j] = temp;
        }
      }
    }
    int c[n];
    for (int i = 0; i < n; i++)
    {
      c[i] = abs(a[i] - b[i]);
    }
    for (int i = 0; i < n; i++)
    {
      if (i > 0)
      {
        printf(" ");
      }
      printf("%d", c[i]);
    }
    printf("\n");
  }

  return 0;
}